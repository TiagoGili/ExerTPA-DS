/*
Função: Verificar se o número é positivo ou negativo
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
	
	if(n > 0){
		printf("O número é POSITIVO");
	}
	else{
		printf("O número é NEGATIVO");
	}  
}
