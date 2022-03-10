#ifndef ACTEUR_H
#define ACTEUR_H
#include <QString>
#include <QTextStream>

enum Sexe {Men, Woman};

class Acteur
{
private:
    QString m_nom;
    QString m_blaze;
    Sexe m_sexe;

public:
    Acteur(QString nom, QString blaze, Sexe sexe);
    QString toString();


};

#endif // ACTEUR_H
