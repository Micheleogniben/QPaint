#include "canvas.h"
#include <QMouseEvent>
#include <QPainter>

Canvas::Canvas(QWidget* parent)
    : QWidget(parent)
{
    setFixedSize(800, 600);
    setMouseTracking(true);

    setAutoFillBackground(true);
    setWindowOpacity(0.5);

    QPixmap watermark(":/resources/icons/watermark.png");
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Window, watermark);
    setPalette(palette);

}
