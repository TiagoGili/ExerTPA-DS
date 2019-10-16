/*
Função: Apresente o nome e o preço do lanche
Autor: Tiago Gili Lopes
Data de Criação: 16/10/2019
Data de Modificação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int cod = 0;
	
	printf("Informe um código: ");
	scanf("%i", &cod);
	
	switch (cod)
	{
		case 1 :
		printf("Cachorro-Quente, R$3,50 \n");
		break;
		
		case 2 :
		printf("X-Salada, R$5,00 \n");
		break;
		
		case 3 :
		printf("X-Burger, R$8,90 \n");
		break;
		
		case 4 :
		printf("X-Tudo, R$12,70 \n");
		break;
		
		default :
		printf("Não cadastrado. \n");
		break;
	}
	getchar();
	system ("pause");
}
