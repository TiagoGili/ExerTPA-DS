/*
Fun��o: Calcule a m�dia de 5 alunos
Autor: Tiago Gili Lopes
Data de Cria��o: 27/10/2019
Data de Modifica��o: 27/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main()
{

	setlocale(LC_ALL,"");
	
    int n1 = 0, n2 = 0, c = 0;
	float m = 0;

  	for (c = 0; c <= 4; c++){
  		
  		printf("Informe a primeira nota do aluno: ");
  		scanf("%i", &n1);
  		printf("Informe a segunda nota do aluno: ");
  		scanf("%i", &n2);
  		m = (n1 + n2)/2;
  		
   		printf("A m�dia anual do aluno � %.2f \n", m);
	}
  	system ("pause"); 
}
