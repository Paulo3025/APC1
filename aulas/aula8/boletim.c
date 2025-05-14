#include <stdio.h>

int main()
{

    float boletim[6][3];
    // Cria na memoria :
    //     0 |  1  |  3
    //  0 |  |     |    |
    //  1 |  |     |    |
    //  2 |  |     |    |
    //  3 |  |     |    |


    printf("Entre com sua notas\n");
    for(int i = 0; i<6; i++){
        printf("Disciplina :\n", i+1);
        for(int j = 0; j<2; j++){
            printf("Nota%i",j+1);
            scanf("%f", &boletim[i][j]);
        }
        boletim[i][2] = 0.4f*boletim[i][0] + 0.6f * boletim [i][1];
    }

    printf("Seu boletim\n");
    for(int i = 0;i<6;i++){
        printf("Disciplina %i: ",i+1);
        for(int j= 0; j<3;j++){
        printf("%5.1f",boletim[i][j]);
    }
    printf("\n");
}
    return 0;
}