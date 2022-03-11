#include "joue.h"
#include <QString>
#include <QTextStream>

Joue::Joue(Acteur *a, Film *f, QString casting):
    m_acteur(a), m_film(f), m_casting(casting)
{

}

QString Joue::toString()
{
        QString rem;
        QTextStream buf(&rem);

        buf<<" "<<m_acteur<<" "<<m_film<<" "<<m_casting;

        return rem;

}
