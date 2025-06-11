#include <stdio.h>
#include <string.h>

int main() {
    const char *string = "Olá, Mundo!";
    char caractere_a_procurar = '!';

    char *resultado = strchr(string, caractere_a_procurar);

    if (resultado != NULL) {
        printf("O caractere '%c' foi encontrado na posição %ld.\n", caractere_a_procurar, resultado - string);
        printf("A partir da posição onde foi encontrado: %s\n", resultado);
    } else {
        printf("O caractere '%c' não foi encontrado.\n", caractere_a_procurar);
    }

    return 0;
}