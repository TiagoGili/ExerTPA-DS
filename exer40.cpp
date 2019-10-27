/*
Função: Mostre o nome de 5 pessoas
Autor: Tiago Gili Lopes
Data de Criação: 27/10/2019
Data de Modificação: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");
	
	int c = 0;
  	char nome[50];

  	for (c = 0; c <= 4; c++){
  		
  	printf("Digite seu nome: ", nome);
  	scanf("%s", nome);
	}
  	system ("pause"); 
}
