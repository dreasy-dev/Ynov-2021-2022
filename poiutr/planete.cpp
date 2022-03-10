#include "planete.h"
#include <QTextStream>

double planete::distance() const
{
    return m_distance;
}


planete::planete(QString nom, int diametre, double distance):
    m_nom(nom), m_diametre(diametre), m_distance(distance)
{

}
QString planete::toString()
{
    QString res;
    QTextStream buf(&res);
    buf<<"planete "<<m_nom<<" - diam = "<<m_diametre<<" km";
    buf <<" - dist = "<<m_distance<<" Mkm";

    return res;
}

double planete::distanceEntre(planete p)
{

    return std::abs(m_distance - p.m_distance);
}
