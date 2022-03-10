#ifndef VECTEUR_H
#define VECTEUR_H
#include <QString>

class Vecteur
{
private:
    double m_x, m_y, m_z;
public:
    Vecteur(double x, double y, double z);

    double x() const;
    double y() const;
    double z() const;
    void setZ(double newZ);
    void mult(double s);
    QString toString();
};

#endif // VECTEUR_H
