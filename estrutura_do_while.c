#include <stdio.h>

int main() {
  int nota;

  do {
    printf("Digite a nota (entre 1 e 10): ");
    scanf("%d", &nota);

    if (nota < 1 || nota > 10) {
      printf("Valor inválido! A nota deve estar entre 1 e 10.\n");
    }
  } while (nota < 1 || nota > 10);

  printf("Nota válida: %d\n", nota);

  return 0;
}