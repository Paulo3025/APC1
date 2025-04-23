#include <stdio.h>
int main(){

    int numero;
    scanf("%i",&numero);

    int incremento = numero;
    int decremento = numero;

    printf("O pre-incremento do numero %i eh %i\n", numero, ++incremento);
    scanf("%i",&incremento);

    printf("O pre-decremento do njumero %i eh %i\n", numero, --decremento);
    scanf("%i",&decremento);

    printf("O pos-incremento do numero %i eh %i\n", numero,incremento++);
    printf("O pos-decremento do nujmero %i eh %i\n",numero,decremento--);
    



    return 0;
}
