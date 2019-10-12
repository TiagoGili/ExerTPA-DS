/*
Função: Informe 4 notas e seus pesos e exiba a média ponderada
Autor: Tiago Gili Lopes
Data de Criação: 12/10/2019
Data de Modificação: 12/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");
	float mp = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0; 
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite o peso da primeira nota: ");
	scanf("%f", &p1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite o peso da segunda nota: ");
	scanf("%f", &p2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite o peso da terceira nota: ");
	scanf("%f", &p3);
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	printf("Digite o peso da quarta nota: ");
	scanf("%f", &p4);
	
	mp = ((n1 * p1) + (n2 * p2) + (n3 * p3) + (n4 * p4)) / (p1 + p2 + p3 + p4);
	
	printf("A média pondera desse valores são %.2f \n", mp);
	
	system ("pause");
}
