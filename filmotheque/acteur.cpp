#include "acteur.h"
#include <QString>
#include <QTextStream>



Acteur::Acteur(QString nom, QString blaze, Sexe sexe):
     m_nom(nom), m_blaze(blaze), m_sexe(sexe)
{

}

QString Acteur::toString()
{
        QString rep;
        QTextStream buf(&rep);
        QString titre = (m_sexe == Men)?"Mister ":"Miss ";
        buf<<titre<<m_nom<<" "<<m_blaze;

        return rep;

}
