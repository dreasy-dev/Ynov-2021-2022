#include "moncanvas.h"
#include <QPainter>

void MonCanvas::calculeUnites()
{
    uniteX =  (width() - 2*margeX)/7;
    uniteY =  (height() - 2*margeY)/5;
}

QPointF MonCanvas::changeCoo(QPointF p)
{
    return QPointF(margeX+uniteX*p.x(),
                   height()-(margeY+uniteY*p.y()));
}

MonCanvas::MonCanvas(QWidget *parent) : QWidget(parent)
{

}

void MonCanvas::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    calculeUnites();
    // abscisse et ordonnée
    painter.drawLine(changeCoo(QPointF(0, 0)),
                     changeCoo(QPointF(7, 0)));
    painter.drawLine(changeCoo(QPointF(0, 0)),
                     changeCoo(QPointF(0, 5)));

    painter.setBrush(QBrush(Qt::green,Qt::SolidPattern));

    QRectF hist(changeCoo(QPointF(1, 2)),
                changeCoo(QPointF(2, 0)));
    painter.drawRect(hist);
    painter.drawText(changeCoo(QPointF(1.2, -0.3)), "1234");

    painter.setBrush(QBrush(Qt::red,Qt::SolidPattern));

    QRectF his(changeCoo(QPointF(6, 7)),
                changeCoo(QPointF(5, 0)));
    painter.drawRect(his);
    painter.drawText(changeCoo(QPointF(5.2, -0.3)), "4567");

    painter.setBrush(QBrush(Qt::red,Qt::SolidPattern));

    QRectF hi(changeCoo(QPointF(3, 4)),
                changeCoo(QPointF(4, 0)));
    painter.drawRect(hi);
    painter.drawText(changeCoo(QPointF(3.2, -0.3)), "890");

}
