/*
Função: Exiba o Nésimo elemento da Sequência Fibonnaci
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
	
	int n = 0, c = 0, ne = 0, n1 = 0, n2 = 1;
	
	printf("Digite um número: ");
	scanf("%i", &n);
	
	for (c = 1; c < n; c++){
		ne = n1 + n2;
		n1 = ne - n1;
		n2 = ne;
	}	
	printf("O Nésimo elemento é %i \n", n2);
  	system ("pause");
}
