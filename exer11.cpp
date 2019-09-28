/*
Função: Troque o valor de 2 números
Autor: Tiago Gili Lopes
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int a = 0, b = 0, c = 0;
	
	printf("Informe o número A: ");
	scanf("%i", &a);
	printf("Informe o número B: ");
	scanf("%i", &b);
	printf("Informe o número C: ");
	scanf("%i", &c);
	
	c = a;
	a = b;
	b = c;
	
	printf("Os valores trocados são A = %i", a);
	printf(" e B = %i", b);
}
