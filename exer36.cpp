/*
Fun��o: Calcule o fatorial do n�mero informado
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
	
  	int n = 0, fat = 0;

  	printf("Informe um n�mero: ");
  	scanf("%i", &n);

  	fat = 1;

  	while (n > 0) {
    	fat = fat *  n;
    	n--;               
  	}
  	printf("O fatorial do n�mero � %i \n", fat);

  	system ("pause"); 
}
