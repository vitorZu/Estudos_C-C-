//<Esse codigo recebe os dados de um lutador de boxe, e mostra sua categoria ideal.>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	
	//Declaração das variaveis 
	float peso; char nome[50],categoria[20];
	
	//Informativo 
	printf("<Esse codigo recebe os dados de um lutador de boxe, e mostra sua categoria ideal.>");
	
	//Input's
	printf("\n\nQual o nome do lutador:\n");
	scanf("%s",&nome);
	
	printf("\nColoque o peso do lutador a ser calssificado : \n");
	scanf("%f",&peso);
	
	//Condicional negativa
	if (peso <= 35){
		printf("\nO atleta nao eh apto para lutar em nenhuma categoria!!!!!\n");
		
		return(0);
	}
	
	//Desenvolvimento 
	if (peso <= 50 ){
		strcpy(categoria, "Palha");
	}
	if (peso > 50 && peso <= 59){
		strcpy(categoria, "Pluma");
	}
	if (peso > 59 && peso <= 75){
		strcpy(categoria, "Leve");
	}
	if (peso > 75 && peso <= 87){
		strcpy(categoria, "Pesado");
	}	
	if (peso >= 88){
		strcpy(categoria, "Super Pesado");
	}
	
	//Output
	printf("\nO Boxeador %s\nCom peso de %3.2fKg\nPertence a categoria %s\n\n\n",nome,peso,categoria);
	
	return(0);
	
}
