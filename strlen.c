#include <stdio.h>
#include <string.h>

int main() {
  char nome[40] = "Paulo Freitas";
  int tamanho;

  tamanho = strlen(nome);
  printf("O nome '%s' tem %d caracteres.\n", nome, tamanho); // Saída: O nome 'Paulo Freitas' tem 13 caracteres.
  return 0;
}