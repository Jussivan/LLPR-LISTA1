#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, n3, media;
	printf("Calcular a media de 3 notas:\n");
	printf("Primeiro numero:");
	scanf("%f", &n1);
	printf("Segundo número:");
	scanf("%f", &n2);
	printf("Terceiro número:");
	scanf("%f", &n3);
	media = n1+n2+n3/3;
	printf("O valor calculado da media entre os %f, %f e %f foi: %f", n1, n2, n3, media);
	return 0;
}

/*O resultado não está correto, pois o algoritmo divide somente o valor n3 por 3,
quando deveria somar os valores n1, n2 e n3 antes, para posteriormente dividir tudo por 3.*/
