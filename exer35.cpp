/*
Fun��o: Mostre todos o n�meros pares entre os n�meros digitados
Autor: Tiago Gili Lopes
Data de Cria��o: 27/10/2019
Data de Modifica��o: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int n1 = 0, n2 = 0, troca = 0, c = 0;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &n1);
	printf("Informe o segundo n�mero: ");
	scanf("%i", &n2);
	
	while (n1 < n2) {
        if (n1 % 2 == 0) {
            printf("O n�mero %i � par. \n", n1);
        }
        n1++;
    }
	system ("pause");
}
