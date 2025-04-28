#include <stdio.h>
int main(){
    int dia;
    printf("Digite um dia da semana:  ");
    scanf(" %i",& dia);

   switch (dia){

case 1 : printf("Domingo\n"); break;
case 2 : printf("Segunda-feira\n");break;
case 3 : printf("terca-feira\n");break;
case 4 : printf("quarta-feira\n");break;
case 5 : printf("Quinta-feira\n");break;
case 6 : printf("\33[34mSexta-feira\n"); break;
case 7 : printf("\033[31mSabado\n");break ;

default: printf("O dia informado eh invalido! Digite o numero entre 1 e 7.\n");
}
    return 0;
}