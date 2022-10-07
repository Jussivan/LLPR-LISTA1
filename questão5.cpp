#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int n1, n2, resto;
	float quociente;
	printf("Calcular o quociente e resto de 2 números:\n");
	printf("Primeiro número:");
	scanf("%d", &n1);
	printf("Segundo número:");
	scanf("%d", &n2);
	quociente = (float) n1/n2;
	resto = n1%n2;
	printf("O valor calculado do quociente é %.2f e o resto é %d", quociente, resto);
	return 0;
}
