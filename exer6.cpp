/*
Fun��o: Calcular o valor de uma presta��o em atraso
Autor: Tiago Gili Lopes
Data de Cria��o: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){

	setlocale (LC_ALL,"");
	float v = 0.0, tax = 0.0, presta = 0.0;
	int tem = 0;
	
	printf("Informe o VALOR da presta��o: ");
	scanf("%f", &v);
	printf("Informe a TAXA em dias: ");
	scanf("%f", &tax);
	printf("Informe o TEMPO: ");
	scanf("%i", &tem);
	
	presta = v + (v * (tax / 100) * tem);
	
	printf("O valor final da presta��o � %f \n", presta);
	
	system ("pause");
}
