/*
Fun��o: Leia 10 valores e ver qual � negativo
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

  	for (c = 1; c <= 10; c++){
  		
  		printf("Digite um n�mero: ");
  		scanf("%i", &n);
  		
  		if (n >= 0){
  			printf("O n�mero � POSITIVO. \n");
			}
		else{
			printf("O n�mero � NEGATIVO. \n");
		}
  	}
  	system ("pause"); 
}
