/*
Fun��o: Leia o nome de um aluno e sua m�dia final
Autor: Tiago Gili Lopes
Data de Cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");
	char nome[50];
	float mf = 0; 
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	printf("Informe a m�dia final: ");
	scanf("%f.1", &mf);
	
	if(mf >= 7){
		printf("O(A) %s", nome);
		printf(" foi APROVADO(A)");
	}
	else{
		printf("O(A) %s", nome);
		printf(" foi REPROVADO(A)");
	}	
}
