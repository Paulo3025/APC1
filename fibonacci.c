#include <stdio.h>

int main() {

  int n, auxiliar;
  int anterior = 0;
  int proximo = 1;

  // Solicitar ao usuario a quantidade de termos.
  printf("Digite a quantidade de termos da sequencia de Fibonacci :\n");
  scanf("%d", &n);

  // Imprime os dois primeiros termos.
  printf("\nSequencia de Fibonacci ( Primeiros %d termos:)", n);
  if (n >= 1) {
    printf("%d\n", anterior);
  }
  if (n >= 2) {
    printf("%d\n", proximo);
  }
  // Declarar um loop for que faca a repeticao de 0 a n(Calcular e imprimir os
  // temos restantes)
  for (int i = 3; i <= n; i++) {

    auxiliar = anterior + proximo;
    printf("%d\n", auxiliar);
    anterior = proximo;
    proximo = auxiliar;
  }

  return 0;
}