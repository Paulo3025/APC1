#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
char primeiro_nome[11];
char ultimo_nome[11];

printf("Digite o primeiro nome:\n");
scanf("%s",&primeiro_nome);
printf("Digite o segundo nome :\n");
scanf("%s",&ultimo_nome);

char nome[31];
// No corpo da função main(), utilize a função strcpy() para copiar o valor da variável 
//primeiro_nome na variável nome.
strcpy(nome, primeiro_nome);


// utilize a função strcat() para concatenar um espaço em branco na variável nome.

strcat(nome, " ");
// utilize a função strcat() para concatenar o valor da variável ultimo_nome na variável nome.

strcat(nome, ultimo_nome);

// utilize a função printf() para imprimir a variável nome.
printf("%s",nome);




    return 0;
    
setlocale(LC_ALL,"Portuguese");
}