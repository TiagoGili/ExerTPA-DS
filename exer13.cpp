/*
Fun��o: Verificar se um n�meor � maior que 5 e menor que 20, se sim mostre seu cubo
Autor: Tiago Gili Lopes
Data de Cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n = 0, cubo = 0;
	
	printf("Informe um n�mero: ");
	scanf("%i", &n);
	
	if(n > 5 and n < 20){
		cubo = n * n * n;
		printf("O n�mero ao cubo � %i \n", cubo);
	}
	else{
		printf("O n�mero digitado n�o est� dentro dos requisitos \n");
	}
	system ("pause");
}
