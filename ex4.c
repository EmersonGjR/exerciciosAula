#include <stdio.h>
#include <stdlib.h>
#define dias 365
char nome[20];
int idade, result;
int main(){
	printf("Escreva seu nome\n");
	scanf("%s", nome);

	printf("Escreva sua idade\n");	
	scanf("%d", &idade);
	result = idade * dias;

	printf("%s , VOCE JA VIVEU %d DIAS\n", nome, result);	
	return 0;
}	
