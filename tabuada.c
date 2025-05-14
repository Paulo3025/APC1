#include <stdio.h>

int main (){

int numero = 0;

while (numero <1 || numero > 10) {
printf("Entre com um numero inteiro entre 1 e 10:\n");
scanf("%i",&numero);
while (getchar() != '\n');// limpar o buffer do teclado.
}
do{
    while (numero <1 || numero > 10) {
        printf("Entre com um numero inteiro entre 1 e 10:\n");
        scanf("%i",&numero);
        while (getchar() != '\n');// limpar o buffer do teclado.
        }

}
 printf("A tabuada de %i eh \n", numero);
// printf("1 X %i = %i\n", numero, numero*1);
// printf("2 X %i = %i\n", numero, numero*2);
// printf("3 X %i = %i\n", numero, numero*3);
// printf("4 X %i = %i\n", numero, numero*4);
// printf("5 X %i = %i\n", numero, numero*5);
// printf("6 X %i = %i\n", numero, numero*6);
// printf("7 X %i = %i\n", numero, numero*7);
// printf("8 X %i = %i\n", numero, numero*8);
// printf("9 X %i = %i\n", numero, numero*9);
// printf("10 X %i = %i\n", numero, numero*10);

// comando for para repetir coisas.
for (int i= 1;i<=10;i++){
   printf("%i X %i = %i\n",i, numero, i * numero);
}
for (int i= 10;i>=1;i--){ // printf("\n%i X %i = %i",i, numero, i * numero);
//for (int i=1; i>0; i++){
   // printf("ao infinito e alem!\n");
}

    return 0;
}