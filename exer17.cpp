/*
Função: Leia a idade de um nadador e classifique nas demais categorias
Autor: Tiago Gili Lopes
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	int id = 0;
	
	/*
		Infatil = 5 a 11 anos
		Juvenil = 12 a 17 anos
		Adultos = maiores de 18 anos
	*/
	
	printf("Informe a idade do nadador: ");
	scanf("%i", &id);
	
	if(id >= 5 and id <= 11){
		printf("A categoria é INFANTIL");
	}
	else if(id >= 12 and id <= 17){
		printf("A categoria é JUVENIL");
	}
	else if(id >= 18){
		printf("A categoria é ADULTO");
	}
}
