#include <stdio.h>

int main (){
    // declarar ruma variavel preco do tipo flutuante.
    float preco = 00.00;
    // inserir printf() para entrar com valor para preco.
    printf("Digite um preco: ");
    // inserir a funcao scanf()para ler o valor flutuante e armazenar em preco.
    scanf("%f", &preco);
    // inserir a  fncao printf()pra imprimir o valor c/ 2 casas decimais.
    printf("\nVoce digitou :%.2f\n", preco);

    //declarar uma variavel fracao com 10 casas decimais do tipo duplo.
    double fracao  ;
    // printf()p/ o usuario entrar com a fracao.Ex. = 3/4.
    printf("\nDigite uma fracao :");
    scanf("%lf", &fracao );
    // inserir printf()para a variavel fracao com 10 casas decimais.
    printf("Voce digitou : %.10f\n", fracao);


    return 0;
}