/*
Fun��o: Troque o valor de 2 n�meros
Autor: Tiago Gili Lopes
Data de Cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int a = 0, b = 0, c = 0;
	
	printf("Informe o n�mero A: ");
	scanf("%i", &a);
	printf("Informe o n�mero B: ");
	scanf("%i", &b);
	printf("Informe o n�mero C: ");
	scanf("%i", &c);
	
	c = a;
	a = b;
	b = c;
	
	printf("Os valores trocados s�o A = %i", a);
	printf(" e B = %i", b);
}
