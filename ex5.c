#include <stdio.h>
#include <stdlib.h>

float precoGasolina, precoPago, litrosT;
int main(){
	
	printf("Escreva o Preço do Litro\n");
	scanf("%f", &precoGasolina);

	printf("Escreva o Preço Pago \n");
	scanf("%f", &precoPago);
	
	litrosT = precoPago / precoGasolina;


	printf("O total de litro colocado foi %f\n", litrosT);


	return 0;
}
