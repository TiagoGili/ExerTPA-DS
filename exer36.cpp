/*
Função: Calcule o fatorial do número informado
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
	
  	int n = 0, fat = 0;

  	printf("Informe um número: ");
  	scanf("%i", &n);

  	fat = 1;

  	while (n > 0) {
    	fat = fat *  n;
    	n--;               
  	}
  	printf("O fatorial do número é %i \n", fat);

  	system ("pause"); 
}
