#include <stdio.h>

int main (){
    float nota_a1;
    float nota_a2;

    printf("Digite a Nota a1\n");
    scanf("%.2f",&nota_a1);

    printf("Digite a Nota a2\n");
    scanf("%.2f",&nota_a2);

    float media_iesb = nota_a1*0.4 + nota_a2*0.6;
    scanf("%.2f",&media_iesb);
    printf("Nota %.2f  %.2f %.2f\n",nota_a1,nota_a2, media_iesb);
    
    
    return 0;
}