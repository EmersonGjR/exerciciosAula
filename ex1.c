#include <stdio.h>
#include <stdlib.h>
#define nome "Imobiliaria Imobilis"

int valor, valor1, total;

int main(){
	
	printf("informe o primeiro valor e o segundo respectivamente\n");
	scanf("%d", &valor);		
	scanf("%d", &valor1);
	total = valor1 * valor;		
	printf("A area do terreno é %d m² \n", total);
	
	printf("%s \n", nome);
	return 0;

}	
