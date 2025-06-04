#include <stdio.h>

int main()
{
    // 0 1 2 3 4 5 6 7 8  9
    int numeros[10]; // Matriz unidimensional = vetor = array = 10 posicoes = | | | | | | | | | |   |
    numeros[0] = 5;
    numeros[1] = -2;
    numeros[2] = 50;
    numeros[3] = 39;
    numeros[4] = 3;
    numeros[5] = 0;
    numeros[6] = 11;
    numeros[7] = 33;
    numeros[8] = 49;
    numeros[9] = 16;
int maior = -99999;

int menor = 99999;
    printf("Entre com 10 numeros inteiros\n");
    for (int i = 0; i < 10; i++){
    
    printf("Numero %i: ", i + 1);
    scanf("%i", &numeros[i]);

    if (maior < numeros[i])
    {
        maior = numeros[i];
    }
if (menor>numeros[i]){
    menor = numeros[i];
}

printf("Seus numeros foram : ");
for(int i=0;i<10;i++){
    printf("%i",numeros[i]);
}
}
printf("\n");
printf("O maior numero foi %i e o menor foi %i\n", maior, menor);

return 0;
}
