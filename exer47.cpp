/*
Fun��o: Leia 10 n�meros e exiba o maior e menor n�mero
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
	
    int n = 0, mai = 0, men = 0, c = 0;
	
		printf("Digite um n�mero: \n");
  		scanf("%i", &mai);
  		printf("Digite um n�mero: \n");
  		scanf("%i", &men);

  	for (c = 1; c <= 10; c++){
  		printf("Digite um n�mero: \n");
  		scanf("%i", &n);
  		
  		if (n > mai){
  			mai = n;
		  }
		if (n < men){
  			men = n;
		  }
		  printf("O maior n�mero � %i e o menor %i \n", mai, men);
  	}
  	system ("pause"); 
}
