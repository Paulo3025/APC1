#include <stdio.h>

int main (){
// declarar uma variavel matricula tipo int ...
// ... as variveis a1, a2 e media do tipo flutuante.
int matricula;
float a1, a2, media;
// inserir uma chamada da funcao scanf() p/ leitura..
// p/ ler um valor para cada variavel.

scanf("%i  %f  %f %f \n", &matricula, &a1,&a2);
// incluir a funcao printf() p/ matricula, a1, a2, media cum \t.
printf("\nMatricula   \t      A1 \t   A2 \t Media \n");
printf("%i    \t %.1f \t %.1f \t %.1f \n ", 20210010, 8.5, 5.0, 6.4);
    return 0;
}