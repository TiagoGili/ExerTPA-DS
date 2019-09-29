/*
Função: Verificar três números e mostrar o maior
Autor: Tiago Gili Lopes
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n1 = 0, n2 = 0, n3 = 0;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	printf("Informe o terceiro número: ");
	scanf("%i", &n3);
	
	if(n1 > n2 and n1 > n3){
		printf("O PRIMEIRO número é maior \n");
	}
	else if(n2 > n1 and n2 > n3){
		printf("O SEGUNDO número é maior \n");
	}
	else if(n3 > n1 and n3 > n2){
		printf("O TERCEIRO número é maior \n");
	}
	else{
		printf("Os números são IGUAIS \n");
	}
	system ("pause");  
}
