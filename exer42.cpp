/*
Fun��o: Leia 5 n�meros e mostre o quadrado deles
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
	
  	int n = 0, c = 0, resu = 0;

  	for (c = 0; c <= 4; c++){
  		
  		printf("Informe um n�mero: ");
  		scanf("%i", &n);
  		resu = n * n;
  		
		printf("O quadrado de %i � %i \n", n, resu);
	}
  	system ("pause"); 
}
