#include "temporaire.h"
#include <QTextStream>

Temporaire::Temporaire(QString prenom, QString nom, Sexe sexe, double taux_horaire, double nbreHeures):
     Humain(prenom, nom, sexe), m_taux_horaire(taux_horaire), m_nbreHeures(nbreHeures)
{

}

double Temporaire::salaire()
{
    return m_taux_horaire * m_nbreHeures;
}


QString Temporaire::toString()
{
    QString res;
    QTextStream buf(&res);
    buf<<"["<<nomClasse()<<"] : "<< Humain::toString()<<" gagne " <<salaire()<<" € ";
    return res;
}
