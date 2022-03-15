#ifndef FILM_H
#define FILM_H
#include <QString>
#include <QTextStream>
#include <QList>
class Joue;

enum Type { SF, Comedie};
class Film
{
private:
    QString m_nom;
    QString m_date;
    Type m_type;
    QList<Joue *> m_joue;
public:
    Film(QString nom, QString date, Type type);
    QString toString();
    void ajouteJoue(Joue *j);
    const QList<Joue *> &getjoue() const;
};

#endif // FILM_H
