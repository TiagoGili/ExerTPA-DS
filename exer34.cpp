/*
Fun��o: Calcule e mostre o quadrado de um n�mero e pressione 0 para sair
Autor: Tiago Gili Lopes
Data de Cria��o: 27/10/2019
Data de Modifica��o: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int n = 1, quadrado = 0;
	
	while (n != 0){

	printf("Informe um n�mero: ");
	scanf("%i", &n);
	quadrado = n * n;
	
	printf("O quadrado do n�mero informado � %i \n", quadrado);
	}
	system ("pause");
}
