#ifndef MONCANVAS_H
#define MONCANVAS_H

#include <QWidget>

class MonCanvas : public QWidget
{
    Q_OBJECT
private:
    int margeX = 30, margeY = 30;
    int uniteX, uniteY;
    void calculeUnites();
    QPointF changeCoo(QPointF p);
public:
    explicit MonCanvas(QWidget *parent = nullptr);
protected:
    // méthode appelée pour redessiner la feuille
    void paintEvent(QPaintEvent *);
signals:

public slots:
};

#endif // MONCANVAS_H
