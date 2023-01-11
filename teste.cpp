#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main ()
{
	
	int random,cont = 0,numero;
	
	srand(time(NULL));
	random = rand()%500;
	
	do{
	
	printf("\nQual eh o numero Magico patrao: ");
	scanf("%d",&numero);
	cont ++;
	if (numero < random){
		printf("\nO numero magico eh maior que o digitado...\n");
	}if (numero > random){
		printf("\nO numero magico eh menor que o digitado...\n");
	}else if (numero == random){
		printf("Voce Acertou o Numero Magico!!!!");
	}else if (cont == 11){
		break;
	}
	}while (numero != random);
	
	// Muito sortudo de 1 a 3
	// Sortudo 4 a 6
	// Normal 7 a 10
	// 10+ tente novamente 
	
	if (cont <= 3 && cont != 0){
		printf("\n\nCarai, rabudo da porra!!!! (Muito Sortudo)");
	}else if (cont > 3 && cont <= 6){
		printf("\n\nPorra ta na sorte em padrin! (Sortudo)");
	}else if (cont > 6 && cont <=9){
		printf("\n\nEh ta padrão ne filho. (Normal)");
	}else{
		printf("\n\nEh migao tenta denovo ai....");
	}
	
	return 0;
}
