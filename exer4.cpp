/*
Função: Calcular o quadrado da soma de 3 números
Autor: Tiago Gili Lopes
Data de Criação: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n1 = 0, n2 = 0, n3 = 0, soma = 0, quadrado = 0;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	printf("Informe o terceiro número: ");
	scanf("%i", &n3);
	
	soma = n1 + n2 + n3;
	quadrado = soma * soma;
	
	printf("O quadrado da soma dos números é %i \n", quadrado);
	
	system ("pause");
}
