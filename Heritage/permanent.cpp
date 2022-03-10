#include "permanent.h"
#include <QTextStream>

permanent::permanent(QString prenom, QString nom, Sexe sexe, double fixe):
    Humain(prenom, nom, sexe), m_fixe(fixe)
{

}

double permanent::salaire()
{
    return m_fixe;
}

QString permanent::toString()
{
    QString res;
    QTextStream buf(&res);
    buf<<"["<<nomClasse()<<"] : "<< Humain::toString()<<" gagne " <<salaire()<<" € ";
    return res;
}
