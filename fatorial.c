#include <stdio.h>

int main() {

  int numero, fatorial=1;
  // Inserir uma chamada à função scanf() para ler a variável numero.
  printf("Entre com um numero:\n");
  scanf("%i", &numero);

  // Fazer um loop for que deve ir de numero até 1, com decremento de 1.
  for (int i = numero; i > 0; i--) {

//Dentro do loop for, faça a variável fatorial receber a multiplicação do contator i ...
// com a variável fatorial.
fatorial = fatorial * i;
  }
// insira uma chamada à função printf() para imprimir os valores de numero e fatorial.
printf("O Numero eh : %i\n",numero);
  printf("O Fatorial eh :%i\n",fatorial);
  return 0;
}