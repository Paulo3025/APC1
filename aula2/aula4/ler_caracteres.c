#include <stdio.h>

int main (){
    char tecla;
    printf("Pressione uma tecla :");
    scanf("%c", &tecla); // tecla = 'a' , precisa acesssar a memoria e para isso usa & para acessar amemoria
    getchar(); // serve para limpar o Buffer do teclado , ou seja ler o \n da leitura anterior 
    printf("Voce precionou a tecla %c\n", tecla);

     printf("Voce pressionou a tecla '%c'\n", tecla);
     scanf("%c", &tecla); // tecla = 'a';








    return 0;
}