/*
Fun��o: Informe se o n�mero � par ou �mpar
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

	if(n % 2 == 0){
		printf("O n�mero � PAR");
	}
	else{
		printf("O n�mero � �MPAR");
	}	
}
