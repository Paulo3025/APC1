#include <stdio.h>

int main()
{
    // No corpo da função main(), declare uma variável vetor que será uma matriz
    //  de inteiros com 5 posições.

    int vetor[5];
    // No corpo da função main(), atribua um valor para cada posição da variável vetor.
    vetor[0] = 0;
    vetor[1] = 1;
    vetor[2] = 2;
    vetor[3] = 3;
    vetor[4] = 5;
    // No corpo da função main(), declare um loop for que faça a repetição de 0 a 4, incrementando de 1.

    for (int i = 0; i < 5; i++)
    {
        // Dentro do loop for, utilize a função printf() para
        //  imprimir a posição i variável vetor.
        printf("%i ", vetor[i]);
    }

    return 0;
}