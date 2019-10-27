/*
Função: Mostre a tabuada do número digitado
Autor: Tiago Gili Lopes
Data de Criação: 27/10/2019
Data de Modificação: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");
	
  	int n = 0, c = 0, tabu = 0;
  	
  	printf("Informe um número: ");
  	scanf("%i", &tabu);

  	for (c = 0; c <= 10; c++){
  		
  	printf("%i X %i = %i \n", tabu, c, c * tabu);

	}
  	system ("pause"); 
}
