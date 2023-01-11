#include <stdio.h>

main()
{
	
	//vars
	char nome[30]; int idade,dias;
	
	//inputs
	printf("Qual seu primeiro nome ?\n");
	scanf("%s",&nome);
	printf("\nQuantos anos voce tem ?\n");
	scanf("%d",&idade);
	
	//calcs
	dias = idade * 365;
	
	printf("\n%s, Voce ja viveu %d dias.\n\n",nome,dias);
	
	return 0;
}
