#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, n3, n4, produto;
	printf("Calcular o produto entre os 4 números:\n");
	printf("Primeiro número:");
	scanf("%f", &n1);
	printf("Segundo número:");
	scanf("%f", &n2);
	printf("Terceiro número:");
	scanf("%f", &n3);
	printf("Quarto número:");
	scanf("%f", &n4);
	produto = n1*n2*n3*n4;
	printf("O valor do produto entre os 4 números é %.2f", produto);
	return 0;
}
