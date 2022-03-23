#include "promo.h"

promo::promo(QString nom):
    m_nom(nom)
{

}

QString promo::toString()
{
        QString res;
        QTextStream buf(&res);
        buf<<m_nom;

        return res;

}
