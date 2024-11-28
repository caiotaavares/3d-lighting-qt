#ifndef ZBUFFER_H
#define ZBUFFER_H

#include <QImage>
#include <vector>
#include <limits>

class ZBuffer {
public:
    ZBuffer(const QSize& size, int offset);
    void setPoint(double x, double y, double z, const QColor& color);
    QImage toImage();

private:
    int m_offset;
    QImage m_image;
    std::vector<std::vector<double>> m_zBuffer;
};

#endif // ZBUFFER_H
