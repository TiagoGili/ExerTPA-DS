/*
Função: Receba dois valores e faça a operação
Autor: Tiago Gili Lopes
Data de Criação: 16/10/2019
Data de Modificação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int n1 = 0, n2 = 0, ope = 0;
	
	printf("Informe o primeiro valor: ");
	scanf("%i", &n1);
	printf("Informe o segundo valor: ");
	scanf("%i", &n2);
	
	printf("Escolha a operação desejada: \n");
	printf("1 - Adição \n");
	printf("2 - Subtração \n");
	printf("3 - Multiplicação \n");
	printf("4 - Divisão \n");
	
	printf("Informe a operação: ");
	scanf("%i", &ope);
	
	switch (ope){
		
		case 1 :
		printf("%i + %i \n", n1, n2);
		break;
		
		case 2 :
		printf("%i - %i \n", n1, n2);
		break;
		
		case 3 :
		printf("%i * %i \n", n1, n2);
		break;
		
		case 4 :
		printf("%i / %i \n", n1, n2);
		break;
		
		default :
		printf("Essa operação não é válida.");
		break;
	}	
	getchar();
	system ("pause");
}
