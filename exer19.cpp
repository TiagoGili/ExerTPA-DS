/*
Função: Informe se o número é par ou ímpar
Autor: Tiago Gili Lopes
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n = 0; 
	
	printf("Informe um número: ");
	scanf("%i", &n);

	if(n % 2 == 0){
		printf("O número é PAR");
	}
	else{
		printf("O número é ÍMPAR");
	}	
}
