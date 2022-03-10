#include "qstd.h"
using namespace qstd;
#include "system.h"


/**
 *Planete("Mercure", 4878,57.9) ,
Planete("Venus", 12104,108.2) ,
Planete("Terre",12756,149.6),
planete("Mars",6787,227.9)
Planete("Jupiter", 142754, 778.3)
Planete("Saturne",120057,1427),
Planete("Uranus", 51177,2869.6) ,
Planete("Neptune", 49520, 4496.6)|
 */

void testSystem()
{
    System sol ("Solaire");
    sol.ajouteplanete(new planete("Mercure", 4878, 57.9));
    sol.ajouteplanete(new planete("Venus", 12104, 108.2));
    sol.ajouteplanete(new planete("Terre", 12756, 149.6));
    sol.ajouteplanete(new planete("Mars", 6787, 227.9));
    sol.ajouteplanete(new planete("Jupiter", 142754, 778.3));
    sol.ajouteplanete(new planete("Saturne", 120057, 1427));
    sol.ajouteplanete(new planete("Uranus", 51177, 2869.6));
    sol.ajouteplanete(new planete("Neptune", 49520, 4496.6));
    cout<<" Voici la liste des planetes du system solaire \n";
    cout<<sol.tostring()<<"\n";
    cout<<" Voila maintenant la planete la plus eloignee du systeme solaire \n";
    cout<<sol.laPlusEloignee()->toString()<<"\n";

}
void testplanete()
{
    planete saturne("saturne", 120057, 1427);
    planete Terre("Terre ", 12756, 150);
    double distance =Terre.distanceEntre(saturne);
    cout<<saturne.toString()<<"\n";
    cout<<Terre.toString()<<"\n";
    cout<<distance<<"\n";
}
int main()
{
   testSystem();
}
