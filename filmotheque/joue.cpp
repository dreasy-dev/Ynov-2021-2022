#include "joue.h"
#include <QString>
#include <QTextStream>

Joue::Joue(Acteur *a, Film *f, QString casting):
    m_acteur(a), m_film(f), m_casting(casting)
{
    m_acteur->ajouteJoue(this);
    m_film->ajouteJoue(this);
}

QString Joue::toString()
{
        QString rem;
        QTextStream buf(&rem);
        buf<<m_acteur->toString()<<" "<<m_film->toString()<<" "<<m_casting;

        return rem;

}
