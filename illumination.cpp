#include "illumination.h"
#include "zbuffer.h"
#include <cmath>

Illumination::Illumination() {
    // Generate sphere points
    for (double a = 0; a < 2 * M_PI; a += 0.01) {
        for (double b = 0; b < 2 * M_PI; b += 0.01) {
            double x = 50 * cos(a) * cos(b);
            double y = 50 * sin(a) * cos(b);
            double z = 50 * sin(b);
            m_spherePoints.push_back(QVector3D(std::round(x), std::round(y), z));
        }
    }

    // Generate plane points
    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 100; y++) {
            m_planePoints.push_back(QVector3D(x, y, 0));
        }
    }

    m_light = QVector3D(100, 0, 100);
    m_observer = QVector3D(0, 0, 100);
    m_sphereColor = QColor(255, 0, 255);
    m_planeColor = QColor(0, 0, 255);

    m_cosAlpha = QVector3D::dotProduct(m_observer, m_light) /
                 (m_observer.length() * m_light.length());
}

// Implementations for other methods would follow a similar pattern to the Python code
// This includes getCos(), iluD(), iluDS(), and the rendering methods noIlu(), iluA(), and iluB()

QImage Illumination::noIlu() {
    ZBuffer zb(QSize(300, 300), 150);

    for (const auto& p : m_spherePoints) {
        zb.setPoint(p.x(), p.y(), p.z(), m_sphereColor);
    }

    for (const auto& p : m_planePoints) {
        zb.setPoint(p.x(), p.y(), p.z(), m_planeColor);
    }

    return zb.toImage();
}

QImage Illumination::iluA(double Ia, double Ka, double Il, double KdSphere, double KdPlane) {
    ZBuffer zb(QSize(300, 300), 150);

    // Implement ambient + diffuse lighting logic similar to Python version
    for (const auto& p : m_spherePoints) {
        QVector3D normal = p;
        double cosTheta = getCos(normal);
        double intensity = iluD(Ia, Ka, Il, KdSphere, cosTheta);
        QColor pointColor = scaleColor(m_sphereColor, intensity);
        // QColor pointColor = m_sphereColor * intensity;
        zb.setPoint(p.x(), p.y(), p.z(), pointColor);
    }

    for (const auto& p : m_planePoints) {
        QVector3D normal(p.x(), p.y(), 1);
        double cosTheta = getCos(normal);
        double intensity = iluD(Ia, Ka, Il, KdPlane, cosTheta);
        QColor pointColor = scaleColor(m_planeColor, intensity);
        // QColor pointColor = m_planeColor * intensity;
        zb.setPoint(p.x(), p.y(), p.z(), pointColor);
    }

    return zb.toImage();
}

QImage Illumination::iluB(double Ia, double Ka, double Il, double K, double n,
                          double KdSphere, double KdPlane,
                          double KsSphere, double KsPlane) {
    ZBuffer zb(QSize(300, 300), 150);

    // Implement ambient + diffuse + specular lighting logic
    for (const auto& p : m_spherePoints) {
        QVector3D normal = p;
        double cosTheta = getCos(normal);
        double d = p.length();
        double intensity = iluDS(Ia, Ka, Il, d, K, KdSphere, cosTheta,
                                 KsSphere, m_cosAlpha, n);
        QColor pointColor = scaleColor(m_sphereColor, intensity);
        zb.setPoint(p.x(), p.y(), p.z(), pointColor);
    }

    for (const auto& p : m_planePoints) {
        QVector3D normal(p.x(), p.y(), 1);
        double cosTheta = getCos(normal);
        double d = p.length();
        double intensity = iluDS(Ia, Ka, Il, d, K, KdPlane, cosTheta,
                                 KsPlane, m_cosAlpha, n);
        QColor pointColor = scaleColor(m_planeColor, intensity);
        // QColor pointColor = m_planeColor * intensity;
        zb.setPoint(p.x(), p.y(), p.z(), pointColor);
    }

    return zb.toImage();
}

// Implement these helper methods in your header
double Illumination::getCos(const QVector3D& normal) {
    return QVector3D::dotProduct(normal, m_light) /
           (normal.length() * m_light.length());
}

double Illumination::iluD(double Ia, double Ka, double Il, double Kd, double cosTheta) {
    return Ia * Ka + Il * Kd * cosTheta;
}

double Illumination::iluDS(double Ia, double Ka, double Il, double d, double K,
                           double Kd, double cosTheta, double Ks,
                           double cosAlpha, double n) {
    return Ia * Ka + (Il / (d + K)) * (Kd * cosTheta + Ks * pow(cosAlpha, n));
}

QColor Illumination::scaleColor(const QColor& baseColor, double intensity) {
    // Clamp intensity between 0 and 1
    intensity = std::max(0.0, std::min(1.0, intensity));

    return QColor(
        static_cast<int>(baseColor.red() * intensity),
        static_cast<int>(baseColor.green() * intensity),
        static_cast<int>(baseColor.blue() * intensity)
        );
}
