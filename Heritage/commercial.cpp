#include "commercial.h"
#include <QTextStream>

Commercial::Commercial(QString prenom, QString nom, Sexe sexe, double fixe, double chiffre_affires, double pourcentage):
    Humain(prenom, nom, sexe), m_fixe(fixe), m_chiffre_affaires(chiffre_affires), m_pourcentage(pourcentage)
{

}

double Commercial::salaire()
{
    return m_fixe + m_chiffre_affaires * m_pourcentage;
}

QString Commercial::toString()
{
    QString res;
    QTextStream buf(&res);
    buf<<"["<<nomClasse()<<"] : "<< Humain::toString()<<" gagne " <<salaire()<<" € ";
    return res;
}
