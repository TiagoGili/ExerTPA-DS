/*
Fun��o: Receba dois valores e fa�a a opera��o
Autor: Tiago Gili Lopes
Data de Cria��o: 16/10/2019
Data de Modifica��o: 16/10/2019
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
	
	printf("Escolha a opera��o desejada: \n");
	printf("1 - Adi��o \n");
	printf("2 - Subtra��o \n");
	printf("3 - Multiplica��o \n");
	printf("4 - Divis�o \n");
	
	printf("Informe a opera��o: ");
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
		printf("Essa opera��o n�o � v�lida.");
		break;
	}	
	getchar();
	system ("pause");
}
