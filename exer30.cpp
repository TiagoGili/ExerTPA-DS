/*
Fun��o: Apresente o nome de um m�s do ano
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
		printf("Janeiro \n");
		break;
		
		case 2 :
		printf("Fevereiro \n");
		break;
		
		case 3 :
		printf("Mar�o \n");
		break;
		
		case 4 :
		printf("Abril \n");
		break;
		
		case 5 :
		printf("Maio \n");
		break;
		
		case 6 :
		printf("Junho \n");
		break;
		
		case 7 :
		printf("Julho \n");
		break;
		
		case 8 :
		printf("Agosto \n");
		break;
		
		case 9 :
		printf("Setembro \n");
		break;
		
		case 10 :
		printf("Outubro \n");
		break;
		
		case 11 :
		printf("Novembro \n");
		break;
		
		case 12 :
		printf("Dezembro \n");
		break;
		
		default :
		printf("Este m�s n�o existe nesse calend�rio \n");
		break;
	}
	getchar();
	system ("pause");
}
