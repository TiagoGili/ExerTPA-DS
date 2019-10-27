/*
Função: Leia 5 números e mostre o quadrado deles
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
	
  	int n = 0, c = 0, resu = 0;

  	for (c = 0; c <= 4; c++){
  		
  		printf("Informe um número: ");
  		scanf("%i", &n);
  		resu = n * n;
  		
		printf("O quadrado de %i é %i \n", n, resu);
	}
  	system ("pause"); 
}
