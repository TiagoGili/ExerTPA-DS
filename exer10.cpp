/*
Função: Verificar se o número é maior que 100, se sim some 150
Autor: Tiago Gili Lopes
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n = 0;
	
	printf("Informe um número: ");
	scanf("%i", &n);
	
	if(n > 100){
		n = n + 150;
	}
	printf("O valor do número é %i", n);
}
