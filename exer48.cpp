/*
Função: Leia 2 valores e calcule a soma dos inteiros entre eles
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
	
    {
      int v1 = 0, v2 = 0, c = 0, s = 0;    
	      
      printf("Digite um numero: ");
      scanf("%i", &v1);
      printf("Digite outro numero: ");
      scanf("%i", &v2);
      
      if(v2 > v1){
    	for(c = v1; c <= v1; c++){
        	s = s +(c + 1);
        }

		printf("A soma dos numeros que estão entre eles é %i \n", s);
        }
  	system ("pause"); 
	}
}
