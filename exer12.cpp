/*
Fun��o: Verificar se o n�mero � positivo ou negativo
Autor: Tiago Gili Lopes
Data de Cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n = 0;
	
	printf("Informe um n�mero: ");
	scanf("%i", &n);
	
	if(n > 0){
		printf("O n�mero � POSITIVO");
	}
	else{
		printf("O n�mero � NEGATIVO");
	}  
}
