#include <qstd.h>
using namespace qstd;
#include <permanent.h>
#include <commercial.h>
#include <temporaire.h>

#include <QList>

int main()
{

    permanent p("Roberto", "Puttin", Masculin, 10000);
    //cout<<p.toString()<<"\n";
    Commercial c("Robert", "Puttin", Feminin, 10000, 200, 20);
    //cout<<c.toString()<<"\n";
    Temporaire t("Robert", "Puttin", Masculin, 100, 2000);
    //cout<<t.toString()<<"\n";
    QList<Humain *> personnel;
    personnel.append(&p);
    personnel.append(&c);
    personnel.append(&t);
    double masse_salariale = 0;

    cout<<"Ma liste d'esclaves est de  "<<personnel.size()<<" personnes :\n";
    foreach (Humain *h, personnel) {
        cout<<h->toString()<<"\n";
        masse_salariale += h-> salaire();

    }
    cout<<"Masse Salariale : "<<masse_salariale<<"\n";
}
