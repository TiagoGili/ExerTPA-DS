/*
Fun��o: Calcular a �rea de um tri�ngulo
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
	
	area = (base * altura) / 2;
	
	printf("A �rea do tri�ngulo � %i", area);
}
