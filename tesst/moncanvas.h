#ifndef MONCANVAS_H
#define MONCANVAS_H

#include <QWidget>

class Moncanvas : public QWidget
{
    Q_OBJECT
private:
    int margeX = 30, margeY = 30;
    int uniteX, uniteY;
    void calculUnites();
    QPointF changeCoor(QPointF p);
public:
    explicit Moncanvas(QWidget *parent = nullptr);
protected:
    //method appellé pour re dessiner la feuille
 void paintEvent(QPaintEvent *);
signals:

};

#endif // MONCANVAS_H
