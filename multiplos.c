#include <stdio.h>

int mai(){
    int numero;

    printf("Digite um numero inteiro :\n");
    scanf("%i",&numero);

// Fazer um loop for que deve ir de 1 a 100, incrementando de 1.
for(int i=1; i<101; i++) {

// Inserir condicao :  Se o contador i é múltiplo de numero, ...
// ..utilizar a função printf() para imprimir o valor de i.
if (i % numero == 0){
    printf("%i", i);
}
}
    return 0;
}