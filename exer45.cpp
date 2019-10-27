/*
Função: Leia 10 números e exiba o maior número
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
	
    int n = 0, mn = 0, c = 0;
	
		printf("Digite um número: \n");
  		scanf("%i", &mn);

  	for (c = 1; c <= 10; c++){
  		printf("Digite um número: \n");
  		scanf("%i", &n);
  		
  		if (n > mn){
  			mn = n;
		  }
		  printf("O maior número é %i \n", mn);
  	}
  	system ("pause"); 
}
