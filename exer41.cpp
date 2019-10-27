/*
Função: Leia 5 números e a metade de cada um deles
Autor: Tiago Gili Lopes
Data de Criação: 27/10/2019
Data de Modificação: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main()
{

	setlocale(LC_ALL,"");
	
  	int n = 0, c = 0;
	float resu = 0;

  	for (c = 0; c <= 4; c++){
  		
  		printf("Informe um número: ");
  		scanf("%i", &n);
  		resu = n / 2;
  		
		printf("A metade de %i é %.2f \n", n, resu);
	}
  	system ("pause"); 
}
