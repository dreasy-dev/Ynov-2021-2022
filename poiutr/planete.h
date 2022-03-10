#ifndef PLANETE_H
#define PLANETE_H
#include <QTextStream>

class planete
{
private:
    QString m_nom ;
     int m_diametre ;
     double m_distance ;
public:
    planete(QString nom,int diametre,double distance);

    QString toString();
    double distanceEntre(planete p);

    double distance() const;
};

#endif // PLANETE_H
