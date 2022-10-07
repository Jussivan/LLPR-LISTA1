#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, n3, media;
	printf("Calcular a média de 3 notas:\n");
	printf("Primeiro número:");
	scanf("%f", &n1);
	printf("Segundo número:");
	scanf("%f", &n2);
	printf("Terceiro número:");
	scanf("%f", &n3);
	media = n1+n2+n3/3;
	printf("O valor calculado da média entre os %f, %f e %f foi: %f", n1, n2, n3, media);
	return 0;
}
