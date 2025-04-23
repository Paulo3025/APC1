#include <stdio.h>

int main (){ 
    // ceclarar ma variavel caractere char = 127.
    char caractere = 127;

    // declarar variavel inteiro int = caractere.
    int inteiro = caractere;

    // declarar variavel flutuante tipo float = inteiro.
    float flutuante = inteiro;

    // declarar uma variavel flutuante tipo float = flutuante.
    double duplo = flutuante;

    printf("\ncaractere = %i\n", caractere);
    printf("inteiro = %i\n", inteiro);
    printf("flutuante = %.7f\n", flutuante);
    printf("duplo = %.7f\n", duplo);

    // atribuir o valor para duplo =256.1234567.
    duplo = 256.1234567;
    // atribuir duplo = flutuante.
    flutuante = (float) duplo;

    // atribuir flutuante = inteiro.
    inteiro = (int) flutuante;

    // atribuir inteiro = caractere.
    caractere = (char) inteiro;

    printf("caractere = %i\n",caractere);
    printf("inteiro = %i\n", inteiro);
    printf("flutuante = %.7f\n", flutuante);
    printf("duplo = %.7f\n", duplo);

    return 0;
}