#include <stdio.h>
// Imprimir a sequencia de Fibonacci em linhas e colunas.
int main() {

  int n, i, j, anterior = 0, proximo = 1, auxiliar;

  printf("Quantos termos voce quer calcular( eleve ao quadrado)?\n");
  scanf("%d", &n);

  printf("     Sequencia de FIBONACCI ( em linhas e colunas):\n");

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%10d  ",  anterior); // Imprime o numero, com espaco para formatar.
      auxiliar = anterior + proximo;
      anterior = proximo;
      proximo = auxiliar;
      if (j == n - 1) {
        printf("\n"); // Nova linha apos cada coluna.
      }
    }
    if (i == n - 1) {
      printf("\n"); // Nova linha apos cada linha.
    }
  }
  return 0;
}