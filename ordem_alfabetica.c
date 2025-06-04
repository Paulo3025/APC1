#include <stdio.h>
#include <string.h>
#include <locale.h>
// Criação de programa que leia duas palavras e as imprima na ordem alfabética.

int main(){
char palavra1[11];
char palavra2[11];

printf("Digite a primeira palavra :\n");
scanf("%s",&palavra1);
printf("Digite a segunda palavra:\n");
scanf("%s",&palavra2);

//declare uma condição if que verifica se a função strcmp() com as duas variáveis for maior ou igual a zero.
if (strcmp(palavra1, palavra2) >= 0) {
    printf("%s %s",palavra2 , palavra1);
} else {
printf("%s  %s", palavra1 , palavra2);

}

    return 0;
setlocale(LC_ALL,"Portuguese");
}