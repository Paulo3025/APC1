#include <stdio.h>

int main (){

 int p;
 int q;

 scanf("%i",&p);
 scanf("%i",&q);

 printf("%i && %i = %i\n", p, q , p && q);
 printf("%i || %i = %i\n", p, q , p || q);
 printf("!%i = %i\n", p, p ! p);
 printf("!%i = %i\n", q , q ! q);
 




    return 0;
}