/*
Fun��o: Calcular o pre�o de venda de um terreno ret�ngular e o pre�o do metro quadrado
Autor: Tiago Gili Lopes
Data de Cria��o: 27/09/2019
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
	
	printf("O valor total do terreno � %i \n", total);
	
	system ("pause");
}
