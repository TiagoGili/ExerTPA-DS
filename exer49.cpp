/*
Fun��o: Exiba o N�simo elemento da Sequ�ncia Fibonnaci
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
	
	int n = 0, c = 0, ne = 0, n1 = 0, n2 = 1;
	
	printf("Digite um n�mero: ");
	scanf("%i", &n);
	
	for (c = 1; c < n; c++){
		ne = n1 + n2;
		n1 = ne - n1;
		n2 = ne;
	}	
	printf("O N�simo elemento � %i \n", n2);
  	system ("pause");
}
