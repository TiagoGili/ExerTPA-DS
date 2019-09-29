/*
Função: Crie um algoritmo que leia o salário e o porcentual de aumento do funcionário
Autor: Tiago Gili Lopes
Data de Criação: 27/09/2019
Data de Modificação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");
	float sala = 0, porcenau = 0, salafi = 0;
	
	printf("Informe o valor do SALÁRIO: ");
	scanf("%f", &sala);
	printf("Informe o PORCENTUAL DE AUMENTO: ");
	scanf("%f", &porcenau);
	
	salafi = sala + sala * (porcenau / 100);
	
	printf("O salário final do funcionário é %f \n", salafi);
	
	system ("pause");
}
