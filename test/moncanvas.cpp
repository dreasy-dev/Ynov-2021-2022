#include "moncanvas.h"
#include <QPainter>
void Moncanvas::calculUnites()
{
    uniteX = (width() - 2*margeX)/7;
    uniteY = (height() - 2*margeY)/5;
}

QPointF Moncanvas::changeCoor(QPointF p)
{
    return QPointF(margeX + uniteX*p.x(), height()-(margeY+uniteY*p.y()));

}

Moncanvas::Moncanvas(QWidget *parent)
    : QWidget{parent}
{

}

void Moncanvas::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    calculUnites();
    painter.drawLine(changeCoor(QPointF(0, 0)), changeCoor(QPointF(7, 0)));

    painter.drawLine(changeCoor(QPointF(0, 0)), changeCoor(QPointF(0, 5)));

}
