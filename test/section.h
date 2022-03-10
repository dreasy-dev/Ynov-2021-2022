#ifndef SECTION_H
#define SECTION_H
#include <QString>


class Section
{
private:
    double r_i, r_e;
    double surface(double r);
public:
    Section(double i, double e);

    double i()const;
    double e()const;
    double surface_section();
    QString toString();
    double getR_i() const;
    void setR_e(double newR_e);
};

#endif // SECTION_H
