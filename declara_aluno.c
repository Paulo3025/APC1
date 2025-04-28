#include <stdio.h>

int main (){
    // declarar uma variavel int  matricula com 8 digitos.
    int matricula = 00000000;
    printf("\nMatricula : %08i\n", matricula);

    // declara umavariavel do tipo char para idade do estudante = 99 anos.
    char idade = 99;
    printf("Idade : %i anos\n", idade );

    // declarar uma varivel do tipo float para altura = 9.90 m.
    float altura = 9.90;
    printf("Altura : %.2f m\n", altura);

    // declarar uma variavel do tipo float para peso = 999.0 Kg.
    float peso = 999.0;
    printf("Peso : %.2f Kg\n", peso);

    // declarar uma variavel do tipo char para sexo = F.
   const  char sexo = 'F';
   printf("Sexo : %c\n", sexo);

    return 0;
}
