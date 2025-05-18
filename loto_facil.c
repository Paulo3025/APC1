
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_NUMEROS 25
#define SORTEADOS 15
#define NAO_SORTEADOS (TOTAL_NUMEROS - SORTEADOS)

void embaralhar(int *vetor, int tamanho) {
    for (int i = tamanho - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
}

void imprimir_jogo(int *jogo, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%2d ", jogo[i]);
    }
    printf("\n");
}

void copiar_grupo(int *dest, int *src, int inicio) {
    for (int i = 0; i < 5; i++) {
        dest[i] = src[inicio + i];
    }
}

int pertence(int *vetor, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor)
            return 1;
    }
    return 0;
}

int main() {
    int sorteados[SORTEADOS];
    int todos[TOTAL_NUMEROS];
    int nao_sorteados[NAO_SORTEADOS];
    int grupo1[5], grupo2[5], grupo3[5];
    int i, j, k, count = 0;

    srand(time(NULL));

    // Entrada dos números sorteados
    printf("Informe os 15 numeros sorteados (entre 1 e 25):\n");
    for (i = 0; i < SORTEADOS; i++) {
        scanf("%d", &sorteados[i]);
    }

    // Preencher vetor total de 1 a 25
    for (i = 0; i < TOTAL_NUMEROS; i++) {
        todos[i] = i + 1;
    }

    // Descobrir os não sorteados
    for (i = 0; i < TOTAL_NUMEROS; i++) {
        if (!pertence(sorteados, SORTEADOS, todos[i])) {
            nao_sorteados[count++] = todos[i];
        }
    }

    // Embaralha os sorteados e divide em 3 grupos
    embaralhar(sorteados, SORTEADOS);
    copiar_grupo(grupo1, sorteados, 0);
    copiar_grupo(grupo2, sorteados, 5);
    copiar_grupo(grupo3, sorteados, 10);

    // Combinações 2 a 2 dos grupos sorteados
    printf("\n--- COMBINACOES DOS GRUPOS SORTEADOS (2 a 2) ---\n");
    int combinacao[15];
    for (i = 0; i < 5; i++) combinacao[i] = grupo1[i];
    for (i = 0; i < 5; i++) combinacao[5 + i] = grupo2[i];
    for (i = 0; i < 5; i++) combinacao[10 + i] = grupo3[i];

    // Mostra os 3 combinações possíveis entre os grupos
    printf("Grupo1 + Grupo2:\n");
    for (i = 0; i < 5; i++) combinacao[i] = grupo1[i];
    for (i = 0; i < 5; i++) combinacao[5 + i] = grupo2[i];
    imprimir_jogo(combinacao, 10);

    printf("Grupo1 + Grupo3:\n");
    for (i = 0; i < 5; i++) combinacao[i] = grupo1[i];
    for (i = 0; i < 5; i++) combinacao[5 + i] = grupo3[i];
    imprimir_jogo(combinacao, 10);

    printf("Grupo2 + Grupo3:\n");
    for (i = 0; i < 5; i++) combinacao[i] = grupo2[i];
    for (i = 0; i < 5; i++) combinacao[5 + i] = grupo3[i];
    imprimir_jogo(combinacao, 10);

    // Embaralha não sorteados, remove 3 e escolhe 1 número fixo
    embaralhar(nao_sorteados, NAO_SORTEADOS);
    int fixo = nao_sorteados[7];
    int restantes[7];
    for (i = 0; i < 7; i++) {
        restantes[i] = nao_sorteados[i];
    }

    printf("\n--- COMBINACOES NAO SORTEADOS (2 a 2 + fixo) ---\n");
    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 7; j++) {
            int jogo[3] = {restantes[i], restantes[j], fixo};
            imprimir_jogo(jogo, 3);
        }
    }

    // Combinações finais com 15 números
    printf("\n--- JOGOS FINAIS DE 15 NUMEROS ---\n");
    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 7; j++) {
            int jogo[15];
            for (k = 0; k < 5; k++) jogo[k] = grupo1[k];
            for (k = 0; k < 5; k++) jogo[5 + k] = grupo2[k];
            jogo[10] = restantes[i];
            jogo[11] = restantes[j];
            jogo[12] = fixo;
            jogo[13] = grupo3[0]; // usa 2 números do grupo3
            jogo[14] = grupo3[1];
            imprimir_jogo(jogo, 15);
        }
    }

    return 0;
}