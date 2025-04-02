#include <stdio.h>

int main (){
// declarar uma variavel tecla tipo caractere.
char tecla ;
// printf()p/entrar com uma teçca e scanf() p/ ler e armezenar 
// ... a variavel tecla.
printf("Digite uma tecla :");
scanf("%c", &tecla);

printf("Voce digitou : %c\n", tecla);

// delcar a variavel nome tipo caractere c/ ate 31 caracteres.
char nome [31];
// chamar printf( )para digitar o meu nome e scanf() p/ ler ..
// ... um valor string e armazenar na variavel nome.
// depois foi alterado scanf("%s", &nome) p/ scanf("%[^\n]s",nome.)...
// ... p/ ler uma string até encontrar o caractere \n no final.
printf("Digite seu nome : ");
scanf("[^\n]s", &nome);

// printf()p/ imprimir meu nome.
printf("Voce digitou : %s\n", nome);




return 0;


}