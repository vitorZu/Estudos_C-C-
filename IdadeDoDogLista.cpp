#include <stdio.h>

main()
{
	
	char nome[10]; int ano,idade;
	
	printf("\n<Esse progama mostra a idade do seu animalzinho de estimacao.>\n\n");
	
	printf("Qual o nome do seu Animalzinho?\n");
	scanf("%s",&nome);
	
	printf("\nEm que ano seu animalzinho nasceu?\n");
	scanf("%d",&ano);
	
	idade = 2022 - ano ;
	
	
	printf("\n%s tem %d anos de idade.\n",nome,idade);
	
	//printf("%d",idade);
	
	return 0;
}
