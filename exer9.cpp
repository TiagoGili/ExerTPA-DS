/*
Função: Calcular o quociente e o resto da divisão
Autor: Tiago Gili Lopes
Data de Criação: 28/09/2019
Data de Modificação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int dividendo = 0, divisor = 0, resto = 0, quociente = 0, vezes = 0;
	
	printf("Informe o DIVIDENDO: ");
	scanf("%i", &dividendo);
	printf("Informe o DIVISOR: ");
	scanf("%i", &divisor);
	
	quociente = dividendo / divisor;
	vezes = divisor * quociente;
	resto = dividendo - vezes;
	
	printf("O quociente é %i", quociente);
	printf(" e o resto é %i \n", resto);
	
	system ("pause");
}
