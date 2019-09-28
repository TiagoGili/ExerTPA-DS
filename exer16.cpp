/*
Função: Colocar três números inteiros em ordem crescente
Autor: Tiago Gili Lopes
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n1 = 0, n2 = 0, n3 = 0;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	printf("Informe o terceiro número: ");
	scanf("%i", &n3);
	
	if(n1 <= n2 and n2 <= n3){
		printf("A ordem crescente dos números é %i", n1);
		printf(", %i", n2);
		printf(" e %i", n3);
	}
	else if(n1 <= n3 and n3 <= n2){
		printf("A ordem crescente dos números é %i", n1);
		printf(", %i", n3);
		printf(" e %i", n2);
	}
	else if(n2 <= n1 and n1 <= n3){
		printf("A ordem crescente dos números é %i", n2);
		printf(", %i", n1);
		printf(" e %i", n3);
	}
	else if(n2 <= n3 and n3 <= n1){
		printf("A ordem crescente dos números é %i", n2);
		printf(", %i", n3);
		printf(" e %i", n1);
	}
	else if(n3 <= n1 and n1 <= n2){
		printf("A ordem crescente dos números é %i", n3);
		printf(", %i", n1);
		printf(" e %i", n2);
	}
	else if(n3 <= n2 and n2 <= n1){
		printf("A ordem crescente dos números é %i", n3);
		printf(", %i", n2);
		printf(" e %i", n1);
	}
}


