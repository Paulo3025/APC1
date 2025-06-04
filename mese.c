#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

int main(){

enum meses_do_ano_e{
    jan,
    fev,
    mar,
    abr,
    mai,
    jun,
    jul,
    ago,
    set,
    out,
    nov,
    dez,

};
char nome_dos_meses[12][10]= {"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","setembro",
                              "Outubro","Novembro","Dezembro"};

    int mes = 0;
    printf("Entre com um mes(entre 1 e 12):\n");
    scanf("%i",&mes);
    if(jan<=mes-1 && mes -1 <=dez){
        printf("O mês escolhido foi %s\n",nome_dos_meses[mes-1]);

    }else{
        printf("Mês inválido\n");
    }
    return 0;
setlocale(LC_ALL,"Portuguese");
}