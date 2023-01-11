#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	
	//declaração de variaveis
	float C1,C2,Hip;
	
	//Informatoivo
	printf("<Esse codigo calcula a hipotenusa de um triangulo retangulo baseando-se nos valores dos catetos.>");
	
	//Input's
	printf("\n\nInsira o valor do primeiro cateto: ");
	scanf("\n%f",&C1);
	
	printf("Insira o valor do segundo cateto: ");
	scanf("\n%f",&C2);

	//Desemvolvimento 
	Hip = sqrt((C1 * C1) + (C2 * C2));
	
	//Outpu't
	printf("\nPara os Catetos %.2f e %.2f, a Hipotenusa eh %.2f \n\n",C1,C2,Hip);
	
	return(0);
	
}
