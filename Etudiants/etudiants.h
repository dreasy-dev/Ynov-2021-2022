#ifndef ETUDIANTS_H
#define ETUDIANTS_H
#include <QString>
#include <QTextStream>
#include <QList>

class Note;


enum Sexe {Men, Woman};


class Etudiants
{
private:
    QString m_nom;
    QString m_prenom;
    Sexe m_sexe;
    QList<Note *> m_addnote;

public:
    Etudiants(QString nom, QString prenom, Sexe sexe);
    QString toString();
    double moyenne();
    void ajouteNote(Note *n);
    const QList<Note *> &getnote() const;

};

#endif // ETUDIANTS_H
