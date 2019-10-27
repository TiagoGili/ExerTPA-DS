/*
Função: Mostre o nome de 50 pessoas
Autor: Tiago Gili Lopes
Data de Criação: 23/10/2019
Data de Modificação: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL,"");
	
	int c = 0;
	char nome[30];
	
	while (c <= 50){
		printf("Informe um nome: ");
		scanf("%s", &nome);
		
		printf("%s \n", &nome);
		
		c ++;
	} 
	system ("pause");
}

	
