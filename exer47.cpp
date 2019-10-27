/*
Função: Leia 10 números e exiba o maior e menor número
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
	
    int n = 0, mai = 0, men = 0, c = 0;
	
		printf("Digite um número: \n");
  		scanf("%i", &mai);
  		printf("Digite um número: \n");
  		scanf("%i", &men);

  	for (c = 1; c <= 10; c++){
  		printf("Digite um número: \n");
  		scanf("%i", &n);
  		
  		if (n > mai){
  			mai = n;
		  }
		if (n < men){
  			men = n;
		  }
		  printf("O maior número é %i e o menor %i \n", mai, men);
  	}
  	system ("pause"); 
}
