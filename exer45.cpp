/*
Fun��o: Leia 10 n�meros e exiba o maior n�mero
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
	
    int n = 0, mn = 0, c = 0;
	
		printf("Digite um n�mero: \n");
  		scanf("%i", &mn);

  	for (c = 1; c <= 10; c++){
  		printf("Digite um n�mero: \n");
  		scanf("%i", &n);
  		
  		if (n > mn){
  			mn = n;
		  }
		  printf("O maior n�mero � %i \n", mn);
  	}
  	system ("pause"); 
}
