#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>




int main(){
    enum dias_da_semana_e{
    dom = 1,
    seg,
    ter,
    qua,
    qui,
    sex,
    sab,
    dom,
    };

    int dia = 0;
    printf("Entre com o dia da semana(1 a 7):");
    scanf("%i", &dia);

    switch (dia)
    {
    
        case seg:
        case ter:
        case qua:
        case qui:
        case sex:
        printf("É dia útil\n");break;
        
        case sab:
        case dom: printf("è dia não útil\n");break.;

          case sab: printf("Eh dia naum util\n"); break;
    default:
        printf("Dia invalido\n");
    }

    return 0;
}





    return 0;
}