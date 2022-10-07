#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, soma, n3, subtracao;
	printf("Calcular a soma de 2 números e subtrair um 3° valor do resultado:\n");
	printf("Primeiro número:");
	scanf("%f", &n1);
	printf("Segundo número:");
	scanf("%f", &n2);
	soma = n1 + n2;
	printf("O valor da soma é %.2f \n", soma);
	printf("Terceiro número:");
	scanf("%f", &n3);
	subtracao = soma - n3;
	printf("O valor da subtração é %.2f", subtracao);
	return 0;
}
