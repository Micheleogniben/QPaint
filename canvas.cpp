#include "canvas.h"
#include <QMouseEvent>
#include <QPainter>

Canvas::Canvas(QWidget* parent)
    : QWidget(parent)
{
    setFixedSize(800, 600);
    setMouseTracking(true);
}
