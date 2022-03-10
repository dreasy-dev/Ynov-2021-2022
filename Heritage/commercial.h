#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "humain.h"

class Commercial : public Humain
{
private:
    double m_fixe;
    double m_chiffre_affaires;
    double m_pourcentage;


public:
    Commercial(QString prenom, QString nom, Sexe sexe, double fixe, double chiffre_affires, double pourcentage );
    double salaire();
    QString toString();
    QString nomClasse(){return "Commercial";}

};

#endif // COMMERCIAL_H
