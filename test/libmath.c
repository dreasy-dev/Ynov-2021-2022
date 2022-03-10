#include <stdio.h>

int puissance (int a, int b) {
    // a^b
    int res = 1;
    while(b!=0){
        res *= a;
        b--;
    }
    return res;
}


int factoriel (int a) {
    if (a==0)   return 1;
    else    return a * factoriel(a-1);
}

void longueur (char a[]) {
    int i = 0;
    while (a[i] !='\0') {
        printf("%d\n", i);
        i++;
    }
    printf("la longueur de la liste est de %d\n", i);
}
