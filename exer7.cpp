/*
Fun��o: Crie um algoritmo que leia o sal�rio e o porcentual de aumento do funcion�rio
Autor: Tiago Gili Lopes
Data de Cria��o: 27/09/2019
Data de Modifica��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");
	float sala = 0, porcenau = 0, salafi = 0;
	
	printf("Informe o valor do SAL�RIO: ");
	scanf("%f", &sala);
	printf("Informe o PORCENTUAL DE AUMENTO: ");
	scanf("%f", &porcenau);
	
	salafi = sala + sala * (porcenau / 100);
	
	printf("O sal�rio final do funcion�rio � %f \n", salafi);
	
	system ("pause");
}
