/*
Fun��o: Leia 50 n�meros e exiba a soma e a m�dia entre eles
Autor: Tiago Gili Lopes
Data de Cria��o: 27/10/2019
Data de Modifica��o: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main()
{

	setlocale(LC_ALL,"");
	
    int n1 = 0, n2 = 0, c = 0, resu = 0;
	float m = 0;

  	for (c = 1; c <= 50; c++){
  		
  		printf("Digite um n�mero: ");
  		scanf("%i", &n1);
  		resu = n1 + n2;
  		n2 = resu;
  	}
  		m = resu/50;
		printf("A soma dos n�meros � %i e a m�dia %.2f. \n", resu, m);
  	system ("pause"); 
}
