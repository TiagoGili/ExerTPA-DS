/*
Fun��o: Informe o ano de nascimento de uma pessoa e mostre sua idade
Autor: Tiago Gili Lopes
Data de Cria��o: 12/10/2019
Data de Modifica��o: 12/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int nasc = 0, idade = 0, at = 0; 
	
	printf("Digite seu ano de nascimento: ");
	scanf("%i", &nasc);
	printf("Digite o ano atual: ");
	scanf("%i", &at);
	
	idade = at - nasc;
	
	printf("A sua idade � de %i anos \n", idade);
	
	system ("pause");
}
