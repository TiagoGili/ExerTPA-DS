/*
Função: Calcule e mostre o quadrado de um número e pressione 0 para sair
Autor: Tiago Gili Lopes
Data de Criação: 27/10/2019
Data de Modificação: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int n = 1, quadrado = 0;
	
	while (n != 0){

	printf("Informe um número: ");
	scanf("%i", &n);
	quadrado = n * n;
	
	printf("O quadrado do número informado é %i \n", quadrado);
	}
	system ("pause");
}
