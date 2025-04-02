#include <stdio.h>

int main (){
    int idade  =0;

    printf("Entre com sua idade: ");
    scanf("%i", &idade);
    getchar ();
    printf("Voce tem %i anos!\n", idade);

    return 0;
}