#include <stdio.h>

int main() {

  int numero;
  int decimal = numero;
printf("Digite o numero decimal para converssao em binario:\n");
scanf("%i",&decimal);
  for (int i = 128; i > 0;
       i = i / 2) { // declare a variável bit inteiro que é o resto da divisão
                    // do decimal pelo contator i.

    int bit = decimal % i;
    printf("%i", bit); // faça a variável decimal receber o valor da decimal
                       // menos o valor de bit vezes o contator i.
    decimal = decimal - bit * i;

  }

  return 0;
}