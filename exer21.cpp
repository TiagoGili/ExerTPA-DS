/*
Função: Calcule o IMC de um aluno
Autor: Tiago Gili Lopes
Data de Criação: 12/10/2019
Data de Modificação: 12/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");
	float p = 0, h = 0, imc = 0; 
	
	printf("Digite o PESO do(a) aluno(a): ");
	scanf("%f", &p);
	printf("Digite a ALTURA do(a) aluno(a): ");
	scanf("%f", &h);

	imc = (p / h) * h;
	
	printf("O IMC do(a) aluno(a) é %f \n", imc);
	
	system ("pause");
}
