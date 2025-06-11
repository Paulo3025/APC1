#include <stdio.h>
#include <string.h>

int main() {
  char str1[50] = "Olá, ";
  char str2[] = "mundo!";

  strcat(str1, str2); // Concatena str2 a str1

  printf("A string resultante é: %s\n", str1); // Saída: A string resultante é: Olá, mundo!

  return 0;
}