#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	
	setlocale (LC_ALL,"Portuguese");
	int maior=0, num, count=1;
	
	while (count <= 10)
	{
		printf("\nDigite o %d° Número: \n",count);
		scanf("%d",&num);
		if (num > maior)
		{
			maior = num;
		}
		count++;
	}
	
	printf("\n\n\nMaior: %d\n\n\n", maior);
	
	return(0);
}
