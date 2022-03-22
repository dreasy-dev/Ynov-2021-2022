#ifndef JOUE_H
#define JOUE_H
#include <film.h>
#include <acteur.h>


class Joue
{
private:
     Acteur *m_acteur;
     Film *m_film;
     QString m_casting;

public:
    Joue(Acteur *a, Film *f, QString casting);
    QString toString();


};

#endif // JOUE_H
