#include <stdio.h>
#include <math.h>

//Programa para clacluar as raizes de uma equacao do 2o. grau...
//... atraves da formula X = (-b +/- raiz_quadrada(b² - 4ac)/2a).
int main (){
    int a,b,c;

    printf("Digite os coeficientes da equacao do 2o. grau a,b,c sendo ax2 +bx +c = 0\n");
    scanf("%i %i %i",&a,&b,&c);

    // declarar umavariavel delta que recebe o valor da operacao b² - 4ac.

    float delta = b*b - 4*a*c;

    if (delta < 0 ) {
        printf("A equacao nao tem raizes Reais\n");
    } else {
     float X1 = (-b + sqrt(delta))/2*a;
     float X2 = (-b - sqrt(delta))/2*a;

     printf("Primeira raiz X1 eh : %.2f\n",X1);
     printf("Segunda raiz  X2 eh: %.2f\n",X2);
    
    
    }
    
    


    return 0;
}
