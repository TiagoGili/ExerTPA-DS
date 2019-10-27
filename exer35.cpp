/*
Função: Mostre todos o números pares entre os números digitados
Autor: Tiago Gili Lopes
Data de Criação: 27/10/2019
Data de Modificação: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int n1 = 0, n2 = 0, troca = 0, c = 0;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	
	while (n1 < n2) {
        if (n1 % 2 == 0) {
            printf("O número %i é par. \n", n1);
        }
        n1++;
    }
	system ("pause");
}
