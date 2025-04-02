#include <stdio.h>

int main (){

   // char 'A', "a", 125, -80
   // int -125, 0 , 125654
   // decinal duas formas : float -9.123456f, 0.0, 0.6655600f
   // mais precisâo : 15 casas decimais double : -9.1234567891011131 , 5.11111111111111 ( 15 números
   // void sem tipo  . Pode ser qualquer coissa.


   printf("O tipo 'char' ocupa %i bytes e vai de %i a %i\n", sizeof(char), -127, 128);
    printf("O tipo 'int' ocupa %i bytes e vai de %i a %i\n", sizeof(int), -21474836, 21474836);
    printf("O tipo 'float' ocupa %i bytes e vai de %E a %E\n", sizeof(float), -3.4E+38, 3.4E+38);
    printf("O tipo 'double' ocupa %i bytes e vai de %LE a %LE\n", sizeof(double), -1.8E+308, 1.8E+308);
    printf("O tipo 'void' ocupa %i bytes\n", sizeof(void));

    return 0;
}