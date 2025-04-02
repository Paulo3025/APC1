#include <stdio.h>

int main (){
    char nome_produto [31];
    int quantidade;
    float preco;
    float valor_total;

    printf("\nEntre com o nome do produto:");
    scanf("%[^\n]s", nome_produto);
    getchar();

    printf("Entre com a quantidade de produto:");
    scanf("%i", &quantidade);
    getchar ();

    printf("Entre com preco do produto:");
    scanf("%f",&preco);
    getchar();

    valor_total = preco * quantidade;
    printf("===============================================\n");
    printf("                 NOTA LEGAL\n");
    printf("===============================================\n");
    printf("Item              Qtd     preco      Valor\n");
    printf("------------------------------------------------\n");
    printf("%-15s   %03i  %7.2f    %7.2f\n", nome_produto, quantidade , preco, valor_total);
    printf("-------------------------------------------------\n");
    printf("Total : %15.2f", valor_total);

    return 0;
}