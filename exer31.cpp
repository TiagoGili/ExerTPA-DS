/*
Fun��o: Digite o n�mero do m�s e mostre a quantidade de dias
Autor: Tiago Gili Lopes
Data de Cria��o: 16/10/2019
Data de Modifica��o: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int mes = 0;
	
	printf("Informe o M�S: ");
	scanf("%i", &mes);
	
	switch (mes)
	{
		
		case 1 :
		printf("Janeiro - 31 dias \n");
		break;
		
		case 2 :
		printf("Fevereiro - 28 dias \n");
		break;
		
		case 3 :
		printf("Mar�o - 31 dias \n");
		break;
		
		case 4 :
		printf("Abril - 30 dias \n");
		break;
		
		case 5 :
		printf("Maio - 31 dias \n");
		break;
		
		case 6 :
		printf("Junho - 30 dias \n");
		break;
		
		case 7 :
		printf("Julho - 31 dias \n");
		break;
		
		case 8 :
		printf("Agosto - 31 dias \n");
		break;
		
		case 9 :
		printf("Setembro - 30 dias \n");
		break;
		
		case 10 :
		printf("Outubro - 31 dias \n");
		break;
		
		case 11 :
		printf("Novembro - 30 dias \n");
		break;
		
		case 12 :
		printf("Dezembro - 31 dias \n");
		break;
		
		default :
		printf("Esse m�s n�o existe. \n");
		break;
	}
	getchar();
	system ("pause");
}
