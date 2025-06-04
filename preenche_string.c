#include <stdio.h>
#include <string.h>

int main (){
char string[11];
// No corpo da função main(), utilize a função memset() para preencher a variável string com o caractere \0.

memset(string, '\0', sizeof(string));

char tecla;
printf("Digite uma tecla :\n");
scanf("%c",&tecla);
memset(string, tecla, 10);//Utilizar a função memset() para preencher as 10 primeiras posições
//  da variável string com o valor da variável tecla.


printf("%s\n", string);//Utilizar a função printf() para imprimir a variável string.

//utilize a função memset() para preencher as 5 primeiras posições da variável string com o caractere *.
memset(string, '*', 5);

// utilize a função printf() para imprimir a variável string.
printf("%s",string);

// faça a posição 5 da variável string receber o caractere \0.
string[5] = '\0';
printf("%s",string);

// No corpo da função main(), declare um loop for que repita de 0 até 10, incrementando de 1.
for(int i=0; i<10; i++) {

    //Dentro do loop for, utilize a função printf() para imprimir cada posição da variável string
printf("%c", string[i]);
}
// Fora do loop for, utilize a função printf() para imprimir o caractere \n.
printf("\n");

    return 0;
}