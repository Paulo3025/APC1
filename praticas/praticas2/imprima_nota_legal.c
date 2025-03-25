#include <stdio.h>

int main (){
    printf("====================================\n");
    printf("            NOTA   LEGAL\n");
    printf("====================================\n");
    printf("Produto  |     Qtd     |  Valor Unit\n");
    printf("-------------------------------------\n");
    printf("%s         %.3i          %.2f\n", "Camisa", 002, 39.99);
    printf("%s          %.3i          %.2f\n", "Calca", 001,  89.90);
    printf("%s    %.3i          %.2f\n" , "Meia Social", 003, 19.99);
    printf("====================================\n");
    printf("%s                     %.2f\n","Total:", 229.85);

    return 0;

}