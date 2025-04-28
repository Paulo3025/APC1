#include <stdio.h>

int main() {
float temperatura;
int categoria;

// Leitura da temperatura
printf("Digite a temperatura ambiente em graus Celsius: ");
scanf("%f", &temperatura);

// Determinando a categoria da temperatura
if (temperatura > 40) {
categoria = 4; // Muito quente
} else if (temperatura > 30) {
categoria = 3; // Quente
} else if (temperatura > 20) {
categoria = 2; // Agradavel
} else {
categoria = 1; // Frio
}

// Usando switch para imprimir a mensagem
switch (categoria) {
case 4:
printf("Muito quente.\n");
break;
case 3:
printf("Quente.\n");
break;
case 2:
printf("Agradavel.\n");
break;
case 1:
printf("Frio.\n");
break;
default:
printf("Temperatura inválida.\n");
break;
}

return 0;
}