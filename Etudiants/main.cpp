#include <QCoreApplication>
#include <QString>
#include <QTextStream>
#include <qstd.h>
#include <etudiants.h>
#include <promo.h>

using namespace qstd;

int main()
{
    Etudiants *etudiants[4] = {
        new Etudiants("Jean",  "Patrick" ,  Men),
        new Etudiants ("Luka",  "Mourgues" ,  Men),
        new Etudiants ("Maxime" ,  "Garcia" ,  Men),
        new Etudiants ("Camille",  "Cano" ,  Woman)
};



    for(int i=0;i<4;i++)
        cout<<etudiants[i]->toString()<<"\n";


}
