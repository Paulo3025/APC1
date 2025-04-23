#include <stdio.h>

int numero1, numero2;
float numero3;


int main (){
  

    printf("Digite um numero inteiro :\n");
    scanf("%i",&numero1);
    printf("Digite outro numero inteiro :\n");
    scanf("%i",&numero2);
    printf("Digite o numero flutuante : ");
    scanf("%f",&numero3);

    int soma = numero1 + numero2;
    scanf("%i",&soma);
    printf("A soma de %i com %i eh igual a %i  \n",numero1, numero2,soma);

    int subtracao = numero1 - numero2;
    scanf("%i",&subtracao);
    printf("A subtracao de %i com %i eh igual a %i\n", numero1, numero2, subtracao);

    int multiplicacao = numero1*numero2;
    scanf("%i",&multiplicacao);
    printf("A multiplicacao de %i com %i eh igual a %i\n",numero1,numero2, multiplicacao);

    int divisao = numero1 / numero2;
    scanf("%i",&divisao);
    printf("A divisao de %i por %i eh igual a %i\n", numero1, numero2, divisao);

    int resto_divisao = numero1 % numero2;
    scanf("%i",&resto_divisao);
    printf("O resto da divisao de %i por %i eh igual a %i\n",numero1,numero2, resto_divisao);

    float divisao_fracionada = numero1 / numero3; 
    scanf("%f",&divisao_fracionada);
    printf("A divisao fracionada de %i por %f eh igual a %f\n", numero1, numero3, divisao_fracionada);




    return 0;
}