/*
Fun��o: Calcular a �rea de um ret�ngulo
Autor: Tiago Gili Lopes
Data de Cria��o: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int base = 0, altura = 0, area = 0;
	
	printf("Informe o valor da BASE: ");
	scanf("%i", &base);
	printf("Informe o valor da ALTURA: ");
	scanf("%i", &altura);
	
	area = (base * altura);
	
	printf("A �rea do ret�ngulo � %i \n", area);
	
	system ("pause");
}

