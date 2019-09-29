/*
Função: Verificar se um númeor é maior que 5 e menor que 20, se sim mostre seu cubo
Autor: Tiago Gili Lopes
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n = 0, cubo = 0;
	
	printf("Informe um número: ");
	scanf("%i", &n);
	
	if(n > 5 and n < 20){
		cubo = n * n * n;
		printf("O número ao cubo é %i \n", cubo);
	}
	else{
		printf("O número digitado não está dentro dos requisitos \n");
	}
	system ("pause");
}
