#include  <stdio.h>

main()
{
	
	//vars
	int D,M,A,RM,RA;
	
	//inputs
	printf("Insira a quantidade de dias:\n");
	scanf("%d",&D);
	
	//calcs
	A = D / 365;
	RA = D % 365;
	M = RA / 30 ;
	RM = RA % 30;
	
	//outputs
	printf("Estamos sem acidentes a %d Anos, %d Meses e %d Dias",A,M,RM);
	
	
	return 0;
}
