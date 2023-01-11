#include  <stdio.h>
#include <stdlib.h>

int main()
{
	
	// se a soma das medidas de dois deles é sempre maior que a medida do terceiro, então, eles podem formar um triângulo.
	int L1,L2,L3,R1=0,R2=0,R3=0;
	
	//Orientacao sobre o programa 
	printf("<Esse Programa recebe os valores de comprimento de tres retas\nE informa se eh possivel a formacao de um triangulo com esses valores\n\
Caso sim, informa se o triangulo eh ISOSCELES, ESCALENO OU EQUILATERO>");
	
	//Input's 
	printf("\n\n\nInforme o primeiro lado do triangulo\n>");
	scanf("%d",&L1);
	
	printf("\nInforme o segundo lado do triangulo\n>");
	scanf("%d",&L2);
	
	printf("\nInforme o terceiro lado do triangulo\n>");
	scanf("%d",&L3);
	
	//Operacoes 
	R1 = L1 + L2;
	R2 = L2 + L3;
	R3 = L3 + L1;
	
	//Output's
	if (R1 < L3 || R2 < L1 || R3 < L2){
		printf("\n\nEsses valores sao imcapazes de formar um triangulo de qualquer tipo que seja.\n\n");
	}else if (L1 == L2 && L1 == L3){
		printf("\n\nEh possivel formar um triangulo do tipo EQUILATERO\n\n");
	}else if (L1 == L2 || L2 == L3 || L1 == L3){
		printf("\n\nEh possivel formar um triangulo do tipo ESCALENO\n\n");
	}else if (L1 !=  L2 && L2 != L3 && L1 != L3){
		printf("\n\nEh possivel formar um triangulo do tipo ISOSCELES\n\n");
	}
	
	//Return 
	return(0);
}
