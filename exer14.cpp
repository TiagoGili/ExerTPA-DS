/*
Fun��o: Verificar dois n�meros e mostrar o maior
Autor: Tiago Gili Lopes
Data de Cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int n1 = 0, n2 = 0;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &n1);
	printf("Informe o segundo n�mero: ");
	scanf("%i", &n2);
	
	if(n1 > n2){
		printf("O PRIMEIRO n�mero � maior \n");
	}
	else if(n2 > n1){
		printf("O SEGUNDO n�mero � maior \n");
	}
	else{
		printf("Os n�meros s�o IGUAIS \n");
	}
	system ("pause");  
}
