/*
Função: Mostre a tabuada do número 7
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
	
  	int n = 0, c = 0;

  	for (c = 0; c <= 10; c++){
  		
  	printf("7 X %i = %i \n", c, c * 7);

	}
  	system ("pause"); 
}
