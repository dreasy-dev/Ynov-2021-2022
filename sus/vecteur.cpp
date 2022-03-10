#include "vecteur.h"

double Vecteur::x() const
{
    return m_x;
}

double Vecteur::y() const
{
    return m_y;
}

double Vecteur::z() const
{
    return m_z;
}

void Vecteur::setZ(double newZ)
{
    m_z = newZ;
}

void Vecteur::mult(double s)
{
    m_x *= s;
    m_y *= s;
    m_z *= s;
}

QString Vecteur::toString()
{
    return QString::asprintf("[%.2f, %.2f, %.2f]", m_x, m_y, m_z);
}

Vecteur::Vecteur(double x, double y, double z):
    m_x(x), m_y(y), m_z(z)
{

}
