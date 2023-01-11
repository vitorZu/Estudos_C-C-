//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

main()
{
	
	//Declaração de variavel
	int num;
	
	//Input
	printf("Digite um numero:\n");
	scanf("%d",&num);
	
	//If - Else
	if (num < 0 ){
		printf("Numero Negativo\n\n\n");
	} else {
		printf ("Numero Positivo\n\n\n");
	}
	
	//Finalizar
	system("PAUSE");
	
}
