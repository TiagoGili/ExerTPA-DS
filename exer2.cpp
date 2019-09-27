/*
Função: Calcular a área de um triângulo
Autor: Tiago Gili Lopes
Data de Criação: 27/09/2019
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
	
	printf("A área do triângulo é %i", area);
}
