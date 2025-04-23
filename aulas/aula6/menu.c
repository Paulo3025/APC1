#include <stdio.h>

int main(){


    int opcao = 0;

    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Recarregar saldo\n");
    printf("3 - ver recados\n");
    printf("4 - Ver ligacoes\n");
    printf("5 - Sair\n");

  //  printf("Esolha uma opcao =>");
  //  scanf("% i",&opcao);



 switch (opcao){
    case1 : printf("Seu saldo eh de R$ 10.00\n");break;
    case2 : printf("Digite 1 para R$ 10.00, 2 para R$ 20.00 ou 5 para R$ 50.00");break;
    case3 : printf("Voce nao tem recados\n");break;
    case4 : printf("Ultimo numero foi 8888-8888\n");break;
    case5 : printf("Ate logo!\n");break;
    default : printf("Opcao invalida! Tente novamente\n");
 }


    return 0;
}

