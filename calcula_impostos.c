#include <stdio.h>

#define ICMS 17%
#define CONFINS 7,6%
#define PIS_PASEP 1,65%

int main(){

    float preco_inicial;
    printf("Digite o preco inicial : \n");
    scanf("%.2f",&preco_inicial);
    
    float valor_icms = ICMS * preco_inicial;
    float valor_confins = CONFINS * preco_incial;
    float valor_pis_pasep = PIS_PASEP * preco_inicial;
    


    return 0;
}