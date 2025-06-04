#include <stdio.h>
#include <string.h>
#include <locale.h>
// 5. Criação de um programa que leia uma frase e imprima na tela quantas vezes aparece a letra lida
// do teclado.

int main()
{
    char frase[31];

    printf("Digite uma frase:\n");
    scanf("%[^\n]s",&frase);
    while (getchar()!='\n');

    char letra;
    printf("Digite uma letra:\n");
    scanf("%c", &letra);

    int quantidade = 0;

    // Declarar um loop for que repita de 0 até o tamanho da frase calculado pela função strlen().
    for (int i = 0; i < strlen(frase); i++)
    {
//Dentro do loop for, se a posição i da frase é igual a variável letra, então adicione 1 à variável 
// quantidade.
if (frase[i] == letra) {
  quantidade++;
}

    }
//No corpo da função main(), se a variável quantidade for maior que zero, utilize a função printf()
// para imprimir o valor da variável. Senão imprima a mensagem "A frase não contem a letra!".

if(quantidade > 0 ){
    printf("%s",quantidade);
}else{
    printf("A frase não contem a letra!");
}
    return 0;
    setlocale(LC_ALL,"Portuguese");
}