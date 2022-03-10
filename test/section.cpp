#include "section.h"
#include <cmath>

double Section::getR_i() const
{
    return r_i;
}

void Section::setR_e(double newR_e)
{
    r_e = newR_e;
}


double Section::surface(double r)
{
    return M_PI*pow(r, 2);
}

Section::Section(double i, double e):
    r_i(i), r_e(e)
{

}

double Section::surface_section()
{
    return surface(r_e) - surface(r_i);
}

QString Section::toString()
{
    return QString::asprintf("r_i : %.2f, r_e : %.2f -> Section %.2f", r_i, r_e, surface_section());
}
