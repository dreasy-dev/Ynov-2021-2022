#include <stdio.h>

#include "matrice.c"


int m[2][2] = {{0 , 3},{5 , 7}};

int main()
{
    printf("on affiche la matrice :\n");
    affiche(m);
    printf("resultat du calcul : ");
    printf("%d \n", determinant(m));
    printf("multiplication scalaire : ");
    printf("%d :\n");
    multiplescalaire(m, 4);
    affiche(m);
    return 0;
}
