#include <stdio.h>

// Criação de programa para calcular o valor do desconto sobre um valor bruto lido com base na escala: ....
// até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.
int main()
{
    float valor_bruto, valor_desconto;

    printf("Entre com o valor bruto :\n");
    scanf("%f", &valor_bruto);

    if (valor_bruto <= 100.00f)
    {
        valor_desconto = valor_bruto * 0.01f;
        printf("Desconto :%.2f\n", valor_desconto);
    }
    else if ( valor_bruto <= 500.0f)
    {
        valor_desconto = valor_bruto * 0.05f;
        printf("Desconto :%.2f\n", valor_desconto);
    }
    else
    {
        valor_desconto = valor_bruto * 0.1f;
        printf("Desconto : %.2f", valor_desconto);
    }

    return 0;
}
