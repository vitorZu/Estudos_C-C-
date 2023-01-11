#include  <stdio.h>

main()
{
	
	//vars
	float n1,n2,n3,M;
	
	//inputs
	printf("Insira o valor da PRIMEIRA nota:\n");
	scanf("%f",&n1);
	printf("Insira o valor da SEGUNDA nota:\n");
	scanf("%f",&n2);
	printf("Insira o valor da TERCEIRA nota:\n");
	scanf("%f",&n3);
	
	//calcs
	M = (n1 * 0.1) + (n2 * 0.2) + (n3 * 0.7);
	
	//outputs
	printf("A media do Aluno foi de %.2f.",M);
	
	
	return 0;
}
