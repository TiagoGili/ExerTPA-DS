/*
Fun��o: Mostre a tabuada do n�mero 7
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
	
  	int n = 0, c = 0;

  	for (c = 0; c <= 10; c++){
  		
  	printf("7 X %i = %i \n", c, c * 7);

	}
  	system ("pause"); 
}
