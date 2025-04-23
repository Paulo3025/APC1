#include <stdio.h>

int main(){
    printf("\nO tipo 'char'   ocupa  %lu bytes na memoria .\n", sizeof (char));// Tipo char = 1 byte 
    printf("O tipo 'int'    ocupa  %lu bytes na memoria .\n", sizeof(int));// Tipo int = 4 bytes.
    printf("O tipo 'float'  ocupa  %lu bytes na memoria.\n", sizeof(float));//Tipo float = 4 bytes.
    printf("O tipo 'double' ocupa  %lu bytes na memoria .\n", sizeof(double));//Tipo double = 8 bytes.
    printf("O tipo 'void'   ocupa  %lu bytes na memoria .\n", sizeof(void));//Tipo void= 1 byte.


    return 0;
}