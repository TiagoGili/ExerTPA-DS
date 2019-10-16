/*
Função: Ler o número do dia da semana
Autor: Tiago Gili Lopes
Data de Criação: 16/10/2019
Data de Modificação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int dia = 0;
	printf("Digite um dia: ");
	scanf("%i", &dia);
	
	switch (dia)
	{
	
	case 1 :
	printf("Domingo. \n");
	break;
	
	case 2 :
	printf("Segunda-feira. \n");
	break;
	
	case 3 :
	printf("Terça-feira. \n");
	break;
	
	case 4 :
	printf("Quarta-feira. \n");
	break;
	
	case 5 :
	printf("Quinta-feira. \n");
	break;
	
	case 6 :
	printf("Sexta-feira. \n");
	break;
	
	case 7 :
	printf("Sabado. \n");
	break;
	
	default :
	printf("Dia da semana inválido. \n");
	break;
	}
	
getchar();
system ("pause");
}
