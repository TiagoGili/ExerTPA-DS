/*
Fun��o: Leia o raio e calcule o comprimento a �rea e o volume de uma esfera
Autor: Tiago Gili Lopes
Data de Cria��o: 12/10/2019
Data de Modifica��o: 12/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");
	float r = 0, c = 0, a = 0, v = 0; 
	
	printf("Digite o RAIO: ");
	scanf("%f", &r);
	
	c = 2 * 3.14 * r;
	a = 3.14 *(r * r);
	v = (4/3)* 3.14 *(r * r * r);
	
	printf("O COMPRIMENTO da circunfer�ncia � %.2f", c);
	printf(" a �REA � %.2f", a);
	printf(" e o VOLUME � %.2f \n", v);
	
	system ("pause");
}
