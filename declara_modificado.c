#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (){
    long int populacao_mundial = 780000000L;// decl. variavel populacao_mundial = int longo.
    printf("Populacao Mundial : %li\n", populacao_mundial);

    // decl. CTE  HORA_EM_SEGUNDOS = inteiro curto = 3600.
    const short int HORA_EM_SEGUNDOS = 3600;
    printf("1 HORA CORRESPONDE A %i segundos.\n", HORA_EM_SEGUNDOS);

    // decl. variavel precisao_extrema = tipo longa = 3.14159265358979323846L.
    long double precisao_extrema= 3.14159265358979323846L;
    printf("Precisao Extrema : %.20Lf\n", precisao_extrema);


    
    return 0;
}