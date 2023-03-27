#include <stdio.h>
#include <stdlib.h>
#define cacetinhos 0.8
#define broa 2
#define poupanca 0.3

float result, pao, broa1;
int main(){
	printf("Digite o numero de cacetinhos\n");
	scanf("%f", &pao);
	
	printf("Digite o numero de broas\n");	
	scanf("%f", &broa1);

	result = ((pao * cacetinhos) + (broa1 * broa)) * poupanca;
	
	 
	printf("O numero total arrecadado para poupanca %f\n", result);	
	return 0;
}	
