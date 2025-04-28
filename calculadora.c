#include <math.h>
#include <stdio.h>

int main(){

// Criacao de um programa para simular uma calculadora, onde o usuario...
//... escolhe as operacoes soma(+), subtracao(-), multiplicacao (*) e divisa0(/).
int operacao;
float numero1,numero2, resultado;
printf("\n==============MENU DE OPCOES ==============\n");
printf("Digite 1 para somar\n");
printf("Digite 2 para subtrair\n");
printf("Digite 3 para multiplicar\n");
printf("Digite 4 para dividir\n");
printf("===========================================\n");

scanf("%i",&operacao);


printf("Digite o primeiro numero N1:\n ");
scanf("%f",&numero1);

printf("Digite o segundo numero N2:\n ");
scanf("%f",&numero2);

if(operacao == 1){
    resultado =numero1 + numero2;
    printf("Resultado da soma eh:%.2f", resultado);
}
if(operacao == 2){
        resultado =numero1 - numero2;
        printf("Resultado da subtracao eh:%.2f.", resultado);
}
if(operacao == 3){
        resultado =numero1 * numero2;
        printf("Resultado da multiplicacao eh:%.2f", resultado);
}
if(operacao == 4){
        resultado =numero1 / numero2;
        printf("Resultado da divisao eh:%.2f", resultado);
}

    return 0; 
}