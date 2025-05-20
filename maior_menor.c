#include <stdio.h>

// Criação de um programa que leia números inteiros até ler zero,...
//  e imprima o maior e o menor entre eles.

int main() {
  int numero, maior, menor;

  // Leitura do primeiro numero
  printf("Entre com um numero inteiro ( 0 finaliza):\n");
  scanf("%i", &numero);

  // Se o prmeiro nuemro for 0, o programa termina
  if (numero == 0) {
    printf("nenhuma seguencia de numeros foi digitada.\n");
    return 0;
  }
  // Inicializando o maior e o menor com o primeiro
  maior = menor = numero;
  // Laço para ler os numeros e encontrar o maior e o menor.
  while (numero != 0) {
    // Ler o proximo numero
    printf("Digite um numero inteiro ( 0 para encerrar):\n");
    scanf("%i", &numero);
    // Se o numero nao for zero, atualizar maior e menor
    if (numero != 0) {
      if (numero > maior) {
        maior = numero;
      }
      if (numero < menor) {
        menor = numero;
      }
    }
  }
  // Imprimir o maior e o menor
  printf("O maior numero eh : %i\n", maior);
  printf("O menor numero eh :%d\n", menor);

  return 0;
}