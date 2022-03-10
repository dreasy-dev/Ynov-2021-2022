#include "qstd.h"
using namespace qstd;
#include "vecteur.h"
#include <cmath>

void testvecteur() {
    // creer un vecteur
    Vecteur v(17, -2, 8.3);
    // puis l'afficher
    cout<<"v="<<v.toString()<<"\n";
    // puis le multiplier avec un scalaire
    v.mult(-2);
    cout<<"v * -2"<<v.toString()<<"\n";
    // change le Z et afficher
    v.setZ(M_PI);
    cout<<v.toString()<<"\n";

}

int main()
{
    cout<<"projet vecteurs\n";
    testvecteur();
}
