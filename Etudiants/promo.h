#ifndef PROMO_H
#define PROMO_H
#include <QString>
#include <QTextStream>
#include <QList>

class etudiants;

class promo

{
private:
    QString m_nom;
    QList<etudiants *> m_addetu;

public:
    promo(QString nom);
    QString toString();
    double moyenne();
    void ajouteEtudiants(etudiants *n);
    const QList<etudiants *> &getetudiants() const;

};

#endif // PROMO_H
