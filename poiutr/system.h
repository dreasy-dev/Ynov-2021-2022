#ifndef SYSTEM_H
#define SYSTEM_H
#include <QList>
#include "planete.h"


class System
{
private:
    QList<planete *> m_planetes;
    QString m_nom;


public:
    System(QString nom);
    void ajouteplanete(planete *p);
    QString tostring();
    planete *laPlusEloignee();

};

#endif // SYSTEM_H
