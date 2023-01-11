#include <stdio.h>


main()
{
	
	//vars
	float reais,preco = 7.26,litros;
	
	//inputs
	printf("Insira quantos reais voce deseja por de gasosa:\n");
	scanf("%f",&reais);
	
	//calcs
	litros = reais / preco;
	
	//outputs
	printf("\nPara o valor medio da gasolia hoje que eh de R$%.2f, com R$%.2f, voce deve conseguir %.2f Litros de Gasolina.\n\n",preco,reais,litros);
	
	
	return 0;
}
