/*
Função: Leia 10 valores e ver qual é negativo
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

  	for (c = 1; c <= 10; c++){
  		
  		printf("Digite um número: ");
  		scanf("%i", &n);
  		
  		if (n >= 0){
  			printf("O número é POSITIVO. \n");
			}
		else{
			printf("O número é NEGATIVO. \n");
		}
  	}
  	system ("pause"); 
}
