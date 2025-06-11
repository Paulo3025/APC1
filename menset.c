#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    
  char buffer[100];

  // Inicializa o buffer com zeros
  memset(buffer, 0, sizeof(buffer));

  // Define os primeiros 20 bytes do buffer como o valor 'A'
  memset(buffer, 'A', 20);

  // Imprime o conteúdo do buffer
  printf("Conteúdo do buffer: %s\n", buffer);
setlocale (LC_ALL,"Portuguese");
  return 0;
  
}