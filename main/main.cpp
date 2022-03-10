#include <stdio.h>
int puissance(int a, int b) {
 // calcul de a^b
 int res = 1;
 while(b != 0) {
 res *= a;
 b--;
 }
 return res;
}
int main()
{
 int i;
 for(i=0;i<35;i++) {
 int p = puissance(2, i);
 printf("2^%2d : %d\n", i, p);
 }
 return 0;
}
