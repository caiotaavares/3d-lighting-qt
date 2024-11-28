#include "zbuffer.h"
#include <cmath>

ZBuffer::ZBuffer(const QSize& size, int offset)
    : m_offset(offset),
    m_image(size, QImage::Format_RGB888),
    m_zBuffer(size.height(), std::vector<double>(size.width(), std::numeric_limits<double>::infinity())) {
    m_image.fill(Qt::black);
}

void ZBuffer::setPoint(double x, double y, double z, const QColor& color) {
    int imgX = static_cast<int>(x + m_offset);
    int imgY = static_cast<int>(m_offset - y);

    if (imgX < 0 || imgX >= m_image.width() || imgY < 0 || imgY >= m_image.height()) {
        return;
    }

    if (z >= m_zBuffer[imgY][imgX]) {
        return;
    }

    m_zBuffer[imgY][imgX] = z;
    m_image.setPixelColor(imgX, imgY, color);
}

QImage ZBuffer::toImage() {
    return m_image;
}
