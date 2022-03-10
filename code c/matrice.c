#include <stdio.h>

int determinant(int m[2][2]){
    int result =m[0][0]*m[1][1]-m[0][1]*m[1][0];
    return result;
}

void affiche(int m [2][2]) {
    printf("%d | %d\n%d | %d\n", m[0][0],m[1][1],m[0][1],m[1][0]);
}

void multiplescalaire(int m[2][2],int s){
    int i=0;
    int j=0;
    for (i =0; i<=1;i++){
        for (j =0; j<=1;j++){
            m[i][j]*=s;
        }
    }
}
