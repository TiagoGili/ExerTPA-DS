/*
Fun��o: Calcular a �rea de um c�rculo
Autor: Tiago Gili Lopes
Data de Cria��o: 27/09/2019
Data de Modifica��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int diametro = 0, pi = 3.14, area = 0;
	
	printf("Informe o valor do DI�METRO: ");
	scanf("%i", &diametro);
	
	area = (diametro * pi);
	
	printf("A �rea do c�rculo � %i \n", area);
	
	system ("pause");
}
