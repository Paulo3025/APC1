#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){

struct contato_t {
        char nome[31];
        unsigned long int telefone;
} contato1, contato2;

strcpy(contato1.nome, "JOSÉ ANTÔNIO DA CONCEIÇÃO");
contato1.telefone = 33332222;

contato2 = contato1;
printf("contato1: %s %lu\n", contato1.nome, contato1.telefone);
printf("contato2: %s %lu\n", contato2.nome, contato2.telefone);

return 0;
setlocale (LC_ALL,"Portuguese");

}
