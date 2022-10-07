#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, media;
	printf("Calcular a média de 2 notas:\n");
	printf("Primeiro número:");
	scanf("%f", &n1);
	printf("Segundo número:");
	scanf("%f", &n2);
	media = (n1+n2)/2;
	printf("O valor calculado da média é %.2f", media);
	return 0;
}

