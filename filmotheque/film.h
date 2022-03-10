#ifndef FILM_H
#define FILM_H
#include <QString>
#include <QTextStream>

enum Type { SF, Comedie};
class Film
{
private:
    QString m_nom;
    QString m_date;
    Type m_type;

public:
    Film(QString nom, QString date, Type type);
    QString toString();


};

#endif // FILM_H
