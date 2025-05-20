#include <stdio.h>

int main(){
    int nota;

    printf("Digite uma nota:\n");
    scanf("%i",&nota);

//Declarar um loop while para verificar o valor lido ...
// para a nota esteja entre 1 a 10.
do {
}while(nota < 1 && nota > 10) ;

//Insirir uma chamada à função printf() para escrever a mensagem "Nota invalida. 
// Tente novamente!”, e insira uma chamada à função scanf() para ler a variável nota.
printf("Nota invalida. Tente novamente!\n");
scanf("%i", &nota);

    return 0;
}