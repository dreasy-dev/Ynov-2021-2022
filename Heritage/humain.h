#ifndef HUMAIN_H
#define HUMAIN_H
#include <QString>
enum Sexe { Masculin, Feminin};
class Humain
{
protected:
    QString m_prenom;
    QString m_nom;
    Sexe m_sexe;
public:
    Humain(QString prenom, QString nom, Sexe sexe);
    virtual QString toString();
    virtual double salaire ()=0;
};
#endif // HUMAIN_H
