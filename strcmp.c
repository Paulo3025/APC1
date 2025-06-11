#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "banana";
    char string2[] = "banana";
    int resultado;

    resultado = strcmp(string1, string2);

    if (resultado == 0) {
        printf("As strings são iguais.\n");
    } else if (resultado < 0) {
        printf("'%s' vem antes de '%s' lexicograficamente.\n", string1, string2);
    } else {
        printf("'%s' vem depois de '%s' lexicograficamente.\n", string1, string2);
    }

    return 0;
}