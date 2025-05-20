#include <stdio.h>

// Função para imprimir a sequência de Fibonacci em linhas e colunas
void        imprimir_FIBONACCI (int n) {
    int a = 0, b = 1, c, i, j;

    // Imprimir a sequência em linhas e colunas, com 5 números por linha
    for (i = 0; i < n; i++) {
        printf("   %d", a); // Adicionar espaço para formatação
        
        c = a + b;
        a = b;
        b = c;

        if (i % 5 == 4) { // Imprimir nova linha a cada 5 números
            printf("\n");
        }
    }
    printf("\n"); // Nova linha após o loop principal
}

// Função para imprimir o nome "Fibonacci" com cores
void imprimir_nome_com_cores() {
    printf("\033[0;31mF\033[0m\033[0;31mi\033[0m\033[0;31mb\033[0m\033[0;31mo\033[0m\033[0;31mn\033[0m\033[0;31ma\033[0m\033[0;31mc\033[0m\033[0;31mi\033[0m\033[0;31mo\033[0m\033[0;31m\n");
}

int main() {
    int numero_termos;

    printf("Numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &numero_termos);

    // Imprimir o nome com cores
    imprimir_nome_com_cores();

    // Imprimir a sequência em linhas e colunas
    imprimir_FIBONACCI( numero_termos);

    return 0;
}