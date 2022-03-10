#include <QCoreApplication>
#include <qstd.h>
using namespace qstd;
#include <film.h>
#include <acteur.h>

int main()
{
    Film *film[4] = {
        new Film("Interstellar",  "2014" ,  SF),
        new Film ("Conctact",  "1997" ,  SF),
        new Film ("L'armee des singes" ,  "1995" ,  SF),
        new Film ("Le cinquieme elelment",  "1990" ,  Comedie)
};

    Acteur *acteur[5] = {
           new Acteur ("Matthew", "Mc CONAUGHEY", Men),
           new Acteur ("Jodie", "FOSTER", Woman),
           new  Acteur ("Bruce", "Willis", Men),
           new Acteur ("Mila", "JOVOVITCH", Woman)

};

    for(int i=0;i<4;i++)
        cout<<film[i]->toString()<<"\n";
    for(int a=0;a<5;a++)
         cout<<acteur[a]->toString()<<"\n";
   // Joue *jouent[6] = {
   //     new Joue(acteur[0], film[0], "Joseph COOPER"),
   //     new Joue(acteur[0], film[1], "Palmer Joss"),
   //     new Joue(acteur[1], film[1], "Eleanor Ann Arroway"),
   //     new Joue(acteur[2], film[3], "Corben Dallas"),
   //     new Joue(acteur[3], film[2], "James Cole"),
   //     new Joue(acteur[3], film[3], "Leeloo Lamina")




   // }
}
