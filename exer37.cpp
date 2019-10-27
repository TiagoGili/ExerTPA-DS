/*
Função: Some todos os números ímpares entre 1 e o valor digitado
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
	
  	int n = 0, s = 0, c = 1;

  	printf("Informe um número: ");
  	scanf("%i", &n);

  	while (c <= n) {
    	if (c % 2 == 1){
    		s = s + c;
		}
    	c++;               
  	}
  	printf("A soma dos números ímpares é %i \n", s);

  	system ("pause"); 
}
