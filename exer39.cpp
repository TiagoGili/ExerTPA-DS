/*
Fun��o: Mostre a tabuada do n�mero digitado
Autor: Tiago Gili Lopes
Data de Cria��o: 27/10/2019
Data de Modifica��o: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");
	
  	int n = 0, c = 0, tabu = 0;
  	
  	printf("Informe um n�mero: ");
  	scanf("%i", &tabu);

  	for (c = 0; c <= 10; c++){
  		
  	printf("%i X %i = %i \n", tabu, c, c * tabu);

	}
  	system ("pause"); 
}
