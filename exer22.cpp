/*
Fun��o: Leia um valor em Celcius e mostre em Fahrenheit 
Autor: Tiago Gili Lopes
Data de Cria��o: 12/10/2019
Data de Modifica��o: 12/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");
	float c = 0, f = 0; 
	
	printf("Digite o valor em CELCIUS: ");
	scanf("%f", &c);
	
	f = (c * 9/5) + 32;
	
	printf("O valor em Fahrenheit � %f \n", f);
	
	system ("pause");
}
