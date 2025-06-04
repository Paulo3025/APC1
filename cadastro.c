#include  <stdio.h>

int main (){

struct endreco_t[61];{

char logradouro[61];
int numero;
int cep;
char complemento[61];
char cidade[61];
char UF[3];

};


struct cliente_t{

char nome[61];
long long int telefone;
char email[61];
struct endereco_t;

    
};



struct cliente_t cliente;
strcpy (cliente.nome,"Paulo");
cliente.telefone = +55 61 9 8103 - 1456L;
strcpy(cliente.email "paulo.firmino@iesb.edu.br");
strcpy(cliente.logradouro, "QE");
cliente.numero = 30;
cliente.cep = 71.065-60;
stcpy(cliente.complemento, "Gura II");
strcpy(cliente.cidade,"Brasilia");
strcpy(cliente.UF,"DF");

printf("Dados do cliente\n");
printf("Nome:%s",cliente.nome);
printf("Telefone: %lli\n", cliente.telefone);
printf("email:%s\n", cliente.email);
printf("Endereco:%s %i - %s - %s / %s/%sn", 

struct cliente_t clientes[10];

for(int i=0; i<10;i++){
printf("Cliente %i\n", i+1);
printf("Entre com o nome do cliente: ");
scanf("%s",clientes[i].nome);

printf("Entre co telefone do cliente :\n");
scanf("%lli",&clientes[i].telefone);

printf("Entre com o email do cliente : ");
scanf("%s",cliente[i].email);


printf("Entte com endereco do cliente:");
printf("Logradouro :");
scanf("%s",clientes[i].endereco.logradouro);

printf("numero :");
scanf("%s",clientes[i].endereco.numero);

printf("Complemento :");
scanf("%s",clientes[i].endereco.complemento);

printf("Cidade :");
scanf("%s",clientes[i].endereco.cidade);

printf("UF:");
scanf("%s",clientes[i].endereco.UF);

printf("cep :");
scanf("%s",clientes[i].endereco.cep);

}

for(int i =0;i<10;i++){
    printf("Dados do clientes %i\n", i+1);
    printf("Nome :%s\n",clientes[i].nome);
    printf("Telefone : %lli\n",clientes[i].telefone);
    printf("E-mail:%s\n",clientes[i].email);
    printf("Endereco")


}

    return 0;
}

