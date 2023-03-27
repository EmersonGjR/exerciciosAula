#include <stdio.h>
#include <stdlib.h>
#define nome "restaurante Bem-Bao"
#define kilo 12
float pesoPrato, result;
int main(){
	printf("Escreva o peso do prato\n");
	scanf("%f", &pesoPrato);
	result = kilo * pesoPrato;

	printf("O valor total a pagar é: %f\n", result);

	printf("<<<<<<%s>>>>>>\n", nome);
	return 0;
}
