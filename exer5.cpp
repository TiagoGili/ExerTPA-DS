/*
Função: Calcular o preço de venda de um terreno retângular e o preço do metro quadrado
Autor: Tiago Gili Lopes
Data de Criação: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int compri = 0, larg = 0, mq = 0, pterre = 0, total = 0;
	
	printf("Informe o valor do comprimento: ");
	scanf("%i", &compri);
	printf("Informe o valor da largura: ");
	scanf("%i", &larg);
	printf("Informe o valor do metro quadrado: ");
	scanf("%i", &mq);
	
	pterre = compri * larg;
	total = pterre * mq;
	
	printf("O valor total do terreno é %i \n", total);
	
	system ("pause");
}
