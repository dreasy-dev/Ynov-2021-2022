#ifndef TEMPORAIRE_H
#define TEMPORAIRE_H

#include "humain.h"

class Temporaire : public Humain
{
private:
    double m_taux_horaire;
    double m_nbreHeures;
public:
    Temporaire(QString prenom, QString nom, Sexe sexe, double taux_horaire, double nbreHeures);
    QString nomClasse(){return "Temporaire";}
    QString toString();
    double salaire();

};

#endif // TEMPORAIRE_H
