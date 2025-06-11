#include <stdio.h>
#include <string.h>

int main() {
  const char *string = "Este é um exemplo de string";
  const char *substring = "exemplo";
  char *resultado;

  resultado = strstr(string, substring);

  if (resultado != NULL) {
    printf("Substring encontrada na posição: %ld\n", resultado - string);
  } else {
    printf("Substring não encontrada\n");
  }

  return 0;
}