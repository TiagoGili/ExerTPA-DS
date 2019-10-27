/*
Função: Exiba todos os números primos entre os valores
Autor: Tiago Gili Lopes
Data de Criação: 27/10/2019
Data de Modificação: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");
	
	int n = 0, r = 0, tf = 0, v = 0, c = 0, c2 = 0;
	
	printf("Informe um número: ");
	scanf("%i", &n);
	
	if(n <= 1){
		printf("1 \n");
	}
	if(n >= 2){
		printf("2 \n");
	}
	for (c = 3; c <= n; c++){
		for(c2 = 2; c2 < c; c2++){
			r = c -((c / c2)* c2);
			if (r == 0){
				v = 1;
			}
		}
		if(v == 0){
		printf("%i \n", c);
		}
		v = 0;
	}
  	system ("pause");
}
