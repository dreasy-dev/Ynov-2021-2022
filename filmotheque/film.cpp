#include "film.h"
#include <QString>
#include <QTextStream>



Film::Film(QString nom, QString date, Type type):
    m_nom(nom), m_date(date), m_type(type)
{

}

QString Film::toString()
{
        QString res;
        QTextStream buf(&res);
        QString Civ = (m_type == SF)?"Sience Fiction ":"Comedie ";
        buf<<" "<<m_nom<<" "<<m_date<<" "<<Civ;

        return res;

}
