/*
Função: Calcular a área de um círculo
Autor: Tiago Gili Lopes
Data de Criação: 27/09/2019
Data de Modificação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int diametro = 0, pi = 3.14, area = 0;
	
	printf("Informe o valor do DIÂMETRO: ");
	scanf("%i", &diametro);
	
	area = (diametro * pi);
	
	printf("A área do círculo é %i \n", area);
	
	system ("pause");
}
