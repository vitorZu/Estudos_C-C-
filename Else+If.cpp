#include <stdio.h>
#include <stdlib.h>

main()
{
	
	int idade;
	
	printf("\nInforme a idade de uma pessoa \n");
	scanf("%d", &idade);
	
	if (idade > 0 && idade < 18) {
		printf("Pessoa não possui carteira de habilitacao.\n\n\n");
	} else if (idade >= 18 && idade <= 65){
		printf("Renove seu exame a cada 5 anos.\n\n\n");
	} else if (idade > 65){
		printf("Renove seu exames a cada 3 anos.\n\n\n");
	}
	
	system ("pause");
	
}
