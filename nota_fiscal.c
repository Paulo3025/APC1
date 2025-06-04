#include <stdio.h>

// Criação de um programa que leia a quantidade e o preço de 5 produtos de um nota fiscal e imprima
//  o valor total de cada produto e o valor total da nota.

int main()
{

    // No corpo da função main(), declare uma variável total do tipo ponto flutuante que deve
    // receber o valor 0.0f.
    float total = 0.0f;

    // No corpo da função main(), declare uma variável nota_fiscal que representa uma matriz 5x3
    // de ponto flutuante.

    float nota_fiscal[5][3];

    // No corpo da função main(), insira um loop for que repita de 0 a 4, incrementando de 1.

    for (int i = 0; i < 5; i++)
    {

        // Dentro do loop for, utilize a função scanf() para ler o valor da posição [i][0] da variável nota_fiscal.
        printf("Digite um valor para nota_fical [i][0] : ");
        scanf("%f", &nota_fiscal[i][0]);
        getchar();

        // Dentro do loop for, utilize a função scanf() para ler o valor da posição [i][1] da variável nota_fiscal.
        printf("Digite um valor para nota_fical [i][1] : ");
        scanf("%f", &nota_fiscal[i][1]);
        getchar();

        // Dentro do loop for, faça a posição [i][2] da variável nota_fiscal receber a multiplicação da
        // posição[i][0] com a posição[i][1] da variável.

        nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];

        // Dentro do loop for, faça a variável total somar com o valor da posição [i][2] da variável nota_fiscal.

        total = total + nota_fiscal[i][2];
    }

    // No corpo da função main(), insira um loop for que repita de 0 a 4, incrementando de 1.

    for (int i = 0; i < 5; i++)
    { // Dentro do loop for, insira um loop for que repita de 0 a 2, incrementando de 1.
        for (int j = 0; j < 3; j++)// Dentro do segundo loop for, utilize a função printf() 
        //para imprimir o valor da posição [i][j] da variável nota_fiscal.
        {
        printf("%.2f: \n \t", nota_fiscal [i][j]);
        }
    }
// No corpo da função main(), utilize a função printf() para imprimir o valor da variável total.
printf("Total %.2f \n : ",total);
    return 0;
}