#include <stdio.h>

int main(){

        float temperatura;

        printf("Qual a temepratura atual na sua cidade?  ");
        scanf("%f",&temperatura);

        if ( temperatura > 40.0f){
            printf("Estah muito quente neste momento\n");
        }
        else if (temperatura > 30.0f){
            printf("Esta quente ! \n");
        }
        else if(temperatura> 20.0f){
            printf("Momento bom para tomar uma cerveja, sorvete,chopp.\n");
        } else{
            printf("Estah frio, momento para tomarum chocolate, vinho ,cafeh.\n");
        }



    

    return 0;
}