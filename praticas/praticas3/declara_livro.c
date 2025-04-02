#include <stdio.h>

int main (){

    // declarar variaveis p/ info. sobre livro.
    // declarar variavel char  ISBN = 000000000000 (13 DIGITOS).
    int ISBN = 000000000000;
    printf("ISBN : %013i\n", ISBN);

    // declarar variavel int Num. Paginas : 000.
    int num_paginas = 000;
    printf("Num. Paginas : %03i\n", num_paginas);

    // declarar uma variavel float Preco = 0000.00.
    float preco_do_livro = 0000.00;
    printf("Preco = %4.2f\n", preco_do_livro);

    // declara variavel do tipo char Ano de publicacao : 0000
    int ano_de_publicacao = 1980;
    printf("Publicado em : %04i", ano_de_publicacao);

    return 0;

}