#include <stdio.h>

int main()
{
    int numeros[10];
    int numero;

    
  

    for (int i = 0; i < 10; i++)
    {

        // Dentro do loop for, insira uma chamada à função scanf() para ler a posição i da variável numeros.
        printf("Digite um valor para um numero: ");
        scanf("%i", &numeros[i]);
        getchar();
    }
     // No corpo da função main(), insira uma chamada à função scanf() para ler a variável numero.
  
    printf("Digite um numero que vai repetir:\n");
    scanf("%i", &numero);
    getchar();
        // No corpo da função main(), declare uma variável achou do tipo inteiro atribuindo o valor -1.
        int achou = -1;

        // No corpo da função main(), faça um loop for que repita de 0 a 9, incrementando de 1.
        for (int i = 0; i < 9; i++)
        {

            // Dentro do loop for, se a posição i da variável numeros é igual a variável numero.
            // Se for, faça a variável achou receber a posição i.
            if (numeros[i] == numero)
            {
                achou = i;
            }
        }
        //No corpo da função main(), se a variável achou é menor que zero utilize a função printf() 
        //para imprimir a mensagem "O numero nao foi encontrado!".
        if(achou < 0 ){
            printf("O numero nao foi encontrado!");
        
        }else {
            printf("O numero foi encontrado na posicao : %i", achou);

    
        }
    return 0;
}