/*
Função: Calcule media da altura de duas pessoas e mostre seus nomes
Autor: Tiago Gili Lopes
Data de Criação: 12/10/2019
Data de Modificação: 12/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");
	float h1 = 0, h2 = 0, m = 0;
	char n1[50], n2[50];  
	
	printf("Digite seu nome: ");
	scanf("%s", &n1);
	printf("Digite sua altura: ");
	scanf("%f", &h1);
	printf("Digite seu nome: ");
	scanf("%s", &n2);
	printf("Digite sua altura: ");
	scanf("%f", &h2);
	
	m = (h1 + h2)/ 2;
	
	printf("A média da altura de %s ", n1);
	printf("e %s", n2);
	printf(" é %.2f metros \n", m);
	
	system ("pause");
}
