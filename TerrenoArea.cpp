#include <stdio.h>



main()
{
	
	//vars
	float Lm,Ln,A,P;
	
	//inputs
	printf("Insira o tamanho do MENOR LADO do terreno (em Metros):\n");
	scanf("%f",&Ln);
	printf("\nInsira o tamanho do MAIOR LADO do terreno (em Metros):\n");
	scanf("%f",&Lm);
	
	//calcs
	A = Lm * Ln;
	P = ((Lm * 2)+(Ln * 2));
	
	//outputs
	printf("\nPara o terreno citado de %.2fm por %.2fm temos\num PERIMETRO de %.2f metros\ne uma AREA de %.2f metros.",Lm,Ln,P,A);
	
	
	return 0;
}
