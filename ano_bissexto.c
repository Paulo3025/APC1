#include <stdio.h>

int main (){
    int ano;

    printf("Digite um ano :");
    scanf("%i",&ano);
    //  No corpo da função main(), verifique se o ano é múltiplo de 4 e não é múltiplo
    //  de 100, ou é múltiplo de 400. Se for, insira uma chamada à função printf() para 
    // imprimir que o ano é bissexto. Senão, insira uma insira uma chamada à função 
    // printf() para imprimir que o ano não é bissexto.

    int ano_multiplo_4 = ano % 4 == 0;
    int ano_nao_multiplo_100 = ano % 100 != 0;
    int ano_multiplo_4_e_ano_nao_multiplo_100 = ano_multiplo_4 && ano_nao_multiplo_100;
    int ano_multiplo_400 = ano % 400 == 0;
    int ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400 = ano_multiplo_4_e_ano_nao_multiplo_100 || ano_multiplo_400;

if (ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400) {
  printf("O ano %d eh bissexto!\n", ano);
} else {
  printf("O ano %d nao eh bissexto!\n", ano);
}



    return 0;
}