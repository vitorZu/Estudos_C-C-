#include <stdio.h>

main(){
	
	int numeros[15];
	int ind;
	int idade = 0;
	
	for (ind = 0; ind < 15; ind++)
	{
		printf("\nDigite a idade: ");
		scanf("%d",&idade);
		numeros[ind] = idade;
	}
	
	for (ind = 0; ind < 15; ind++)
	{
		printf("\n%do Numero eh %d",(ind+1),numeros[ind]);
	}
	
	printf("\n\nInforme idade para pesquisa: ");
	scanf("%d",&idade);
	
	for(ind = 0; ind < 15;ind++)
	{
		if(idade == numeros[ind])
			printf("\nIdade encontrada na posiçao %d ",ind);
	}
	return 0;
}
