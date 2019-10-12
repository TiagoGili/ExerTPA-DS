/*
Função: Informe horas, minutos, segundos e exiba em segundos
Autor: Tiago Gili Lopes
Data de Criação: 12/10/2019
Data de Modificação: 12/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int h = 0, min = 0, s = 0, total = 0; 
	
	printf("Digite o valor de horas: ");
	scanf("%i", &h);
	printf("Digite o valor de minutos: ");
	scanf("%i", &min);
	printf("Digite o valor de segundos: ");
	scanf("%i", &s);

	total = (h * 3600) + (min * 60 ) + s;
	
	printf("O valor total é %i segundos \n", total);
	
	system ("pause");
}
