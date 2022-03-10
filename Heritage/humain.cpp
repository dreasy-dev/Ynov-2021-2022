#include <humain.h>
#include <QTextStream>


Humain::Humain(QString prenom, QString nom, Sexe sexe):
    m_prenom(prenom), m_nom(nom), m_sexe(sexe)
{

}

QString Humain::toString()
{
    QString res;
    QTextStream buf(&res);
    QString titre = (m_sexe == Feminin)?"Mme.":"M.";
    buf<<titre<<" "<<m_prenom<<" "<<m_nom;

    return res;
}
