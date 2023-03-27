#include <stdio.h>
#include <stdlib.h>
#define mult 4

int numeroCavalos, result;
int main (){
	printf("Escreva o numero de cavalos da hara\n");
	scanf("%d", &numeroCavalos);
	result = numeroCavalos * mult;

	printf("O numero total de ferraduras necessarias é: %d\n", result);
	
	return 0;
	
}	
