#include <stdio.h>

int main (){
    // declarar uma variavel numero di tipo int.
    int numero ;
    // no corpo funcao main()inserir uma ...
    //.. chamada a funcao scanf()p/ ler o inteiroe armazenar na variavel numero.
    printf("Digite um numero inteiro :");
    scanf("%i",& numero);

    // inserir printf()para imprimir a variavel numero.
    printf("Voce digitou : %i\n", numero);

    // declarar variaveis  X e Y do tipo int p/ represnetar ..
    // ... as coordenadas de um ponto cartesiano.
    int x;
    int y;
    printf("Digite as coordenads x e y :");
    scanf("%i %i", &x, &y);
    // chamar printf()p/ imprimir x e y.
    printf("Você digitou :(%i , %i)\n", x, y);




    return 0;
}