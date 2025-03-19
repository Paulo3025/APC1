#include <stdio.h>

int main(){

    printf("------------------------------------------------\n");
    printf("                     NOTA LEGAL                 \n");
    printf("------------------------------------------------\n");
    printf(" ITEM            QTDE.     PR(R$)          VALOR\n");
    printf("%-16s    %03i     %8.2f     %9.2f\n","Caneta Azul",2,2.0,4.0);
    printf("%-15s    %03i     %9.2f     %9.2f\n","Borracha",1,5.0,5.0);
    printf("%-16s    %03i     %7.2f     %9.2f\n","Resma de Papel" ,1 , 12.0 ,12.0);
    printf("------------------------------------------------\n");
    printf("TOTAL ..................................R$%f\n", 21.0);

    return 0;
}