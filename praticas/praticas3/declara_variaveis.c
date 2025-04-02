#include <stdio.h>

int main() {
    int idade = 25 ; // declara variavel do tipo inteiro chamada idade.
    printf("\nIdade  : %i anos.\n", idade);

    float altura = 1.75f;// declara variavel do tipo ponto flutuante chamada idade.
    printf("Altura : %.2f metros.\n", altura);

    char tecla ='A';// declara variavel do tipo caractere chamada tecla.
    printf("Tecla  : '%c'.\n", tecla);

    double numero_e = 2.7182818284;
    printf("Numero de Euler : %.10f\n", numero_e);
    return 0;
}