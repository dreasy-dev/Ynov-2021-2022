#include "etudiants.h"



Etudiants::Etudiants(QString nom, QString prenom, Sexe sexe):
     m_nom(nom), m_prenom(prenom), m_sexe(sexe)
{

}

QString Etudiants::toString()
{
        QString rep;
        QTextStream buf(&rep);
        QString titre = (m_sexe == Men)?"Mister ":"Miss ";
        buf<<titre<<m_nom<<" "<<m_prenom;

        return rep;

}
