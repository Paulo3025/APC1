#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    // IMPRIME O MINIMO E O MAXIMO DOS TIPOS SHORT int = -32768 e 32767 .
    //  unsigned short int = 0 e 65535 .

    printf("\nO tipo 'short int' aceita valores entre %i e %i .\n",SHRT_MIN, SHRT_MAX);
    printf("O tipo 'unsigned short int' aceita valores entre %i e %i .\n", 0, USHRT_MAX);

    // imprime valor maximo e minimo do tipo long int  =0 e  -2147483648
    // e unsigned long int =  0 e 65535   .
    //O tipo 'unsigned long int' aceita valores entre 0 e 4294967295.

    printf("O tipo 'long int' aceita valores entre %li e %li .\n", LONG_LONG_MIN, LONG_MAX);
    printf("O tipo 'unsigned short int' aceita valores entre %i e %i . \n", 0, USHRT_MAX);
    printf("O tipo 'unsigned long int' aceita valores entre %i e %lu.\n", 0, ULONG_MAX);
    printf("O tipo 'double' aceita valores entre %LE e %LE. \n", LDBL_MIN, LDBL_MAX);





}