/*
Função: Verificar dois números e mostrar o maior
Autor: Tiago Gili Lopes
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n1 = 0, n2 = 0;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	
	if(n1 > n2){
		printf("O PRIMEIRO número é maior \n");
	}
	else if(n2 > n1){
		printf("O SEGUNDO número é maior \n");
	}
	else{
		printf("Os números são IGUAIS \n");
	}
	system ("pause");  
}
