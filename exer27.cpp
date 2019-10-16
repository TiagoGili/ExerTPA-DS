/*
Função: Verificar se um número é igual a UM ou DOIS
Autor: Tiago Gili Lopes
Data de Criação: 16/10/2019
Data de Modificação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int n = 0;
	
	printf("Informe um número: ");
	scanf("%i", &n);
	
	switch (n)
	{
	case 1 :
    printf("Um \n");
    break;
	
	case 2 :
	printf("Dois \n");
	break;
	
	default :
    printf ("Valor invalido!\n"); 
    break;
	}	
  getchar();
  system ("pause");
}
