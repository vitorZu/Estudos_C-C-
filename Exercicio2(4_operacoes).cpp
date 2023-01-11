//Includes
#include <stdio.h>
#include <stdlib.h>

main()
{
	//Declaração de variaveis 
	int v1,v2,Sv,Pv,Rv;
	float Qv;
	
	//informativo
	printf("<Esse codigo recebe 2 valores inteiros e efetua as 4 operacoes da linguagem C.>");
	
	//Input's
	printf ("\n\ninforme o primeiro valor a calcular: \n");
	scanf("%d",&v1);
	
	printf ("\ninforme o segundo valor a calcular: ");
	scanf("%d",&v2);
	
	//calculos
	Sv = (v1 + v2);
	Pv = (v1 * v2);
	Qv = ((float)v1 / (float)v2);
	Rv = (v1 % v2);
	
	//Output's
	printf("\nA) A Soma dos valores eh: %d \n",Sv);
	printf("\nB) O Produto dos valores eh: %d \n",Pv);
	printf("\nC) O Quociente do primeiro pelo segundo eh: %3.2f \n",Qv);
	printf("\nD) O Resto da divisao do primeiro pelo segundo eh: %d \n\n",Rv);
	
	return(0);
	
}
