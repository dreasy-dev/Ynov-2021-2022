#ifndef ACTEUR_H
#define ACTEUR_H
#include <QString>
#include <QTextStream>
#include <QList>
class Joue;


enum Sexe {Men, Woman};

class Acteur
{
private:
    QString m_nom;
    QString m_blaze;
    Sexe m_sexe;
    QList<Joue *> m_joue;
public:
    Acteur(QString nom, QString blaze, Sexe sexe);
    QString toString();
    void ajouteJoue(Joue *j);
    const QList<Joue *> &getjoue() const;
};

#endif // ACTEUR_H
