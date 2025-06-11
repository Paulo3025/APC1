#include <stdio.h>
#include <string.h>

int main() {
  char string1[] = "Olá, mundo!";
  char string2[20]; // Buffer de destino com espaço para a string

  // Copia a string1 para string2
  strcpy(string2, string1);

  printf("String original: %s\n", string1);
  printf("String copiada: %s\n", string2);

  return 0;
}