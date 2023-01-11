#include  <stdio.h>
#include <stdlib.h>

main()
{
	
	//Declarando Variaveis 
	float gc,gf;
	
	//Informativo
	printf("<Esse codigo converte um determinado valor de graus Fahrenheit em Celsius.>\n\n");
	
	//Input
	printf("Insira um valor em Fahrenheit para ser convertido:\n");
	scanf("%f",&gf);
	
	//Desenvolvimento
	gc = (((gf - 32)* 5)/ 9);
	
	//Output
	printf("\n\n\n %.2fF graus Fahrenheit para Celsius equivale a %.2fC graus. \n\n\n",gf,gc);
	
	return(0);
	
}
