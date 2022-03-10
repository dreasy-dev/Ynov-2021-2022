#ifndef PERMANENT_H
#define PERMANENT_H

#include "humain.h"

class permanent : public Humain
{
private:
    double m_fixe;
    QString nomClasse(){return "Permanent";}
public:
    permanent(QString prenom, QString nom, Sexe sexe, double fixe);
    double salaire();
    QString toString();
};

#endif // PERMANENT_H
