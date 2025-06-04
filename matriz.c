#include <stdio.h>

//  Criação de programa para aprender a manipular uma matriz bidimensional.

int main()
{
    // No corpo da função main(), declare uma variável matriz que será uma matriz de inteiros...
    // com 3x3 posições.

    int matriz[3][3];
    // No corpo da função main(), atribua um valor para cada posição da variável matriz.
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
// No corpo da função main(), declare um loop for que faça a repetição de 0 a 2, incrementando de 1.    
for(int i=0; i<3; i++) {// Dentro do loop for, declare um loop for que faça a repetição de 0 a 2, incrementando de 1.
    for(int j=0; j<3; j++) {//Dentro do segundo loop for, utilize a função printf() para imprimir a posição i variável vetor.
        printf("%i\t", matriz[i][j]);


    }
    // Dentro do primeiro loop for, utilize a função printf() para imprimir o caractere \n.
    printf("\n");

}
    return 0;
}