#ifndef ILLUMINATION_H
#define ILLUMINATION_H

#include <QVector3D>
#include <QImage>
#include <vector>

class Illumination {
public:
    Illumination();
    QImage noIlu();
    QImage iluA(double Ia, double Ka, double Il, double KdSphere, double KdPlane);
    QImage iluB(double Ia, double Ka, double Il, double K, double n,
                double KdSphere, double KdPlane, double KsSphere, double KsPlane);

    QColor scaleColor(const QColor& baseColor, double intensity);

private:
    std::vector<QVector3D> m_spherePoints;
    std::vector<QVector3D> m_planePoints;
    QVector3D m_light;
    QVector3D m_observer;
    QColor m_sphereColor;
    QColor m_planeColor;
    double m_cosAlpha;

    double getCos(const QVector3D& normal);
    double iluD(double Ia, double Ka, double Il, double Kd, double cosTheta);
    double iluDS(double Ia, double Ka, double Il, double d, double K,
                 double Kd, double cosTheta, double Ks, double cosAlpha, double n);

};

#endif // ILLUMINATION_H
