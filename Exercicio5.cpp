#include <stdio.h>
#include <stdlib.h>

main()
{
	
	//Declaracao de Var
	char nome[50],sexo; 
	int id; 
	float sal,salF,abo;
	
	//Input's de dados.
	printf("Digite o nome do Funcionario:\n");
	scanf("%s",&nome);
	
	printf("Qual a Idade do Funcionario:\n");
	scanf("%d",&id);
	
	fflush(stdin);
	printf("Digite o Sexo do Funcionario (M ou F):\n");
	scanf("%c",&sexo);
	
	//condicional saudavel////////////////////////////////////////
	if (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F'){
		printf("Sexo Invalido, tente novamente.\n");
		return(0);
	}
	//////////////////////////////////////////////////////////////	
	
	printf("Digite o Salario do Funcionario:\n");
	scanf("%f",&sal);
	
	//Funcoes If's
	if (sexo == 'M' || sexo == 'm' && id >= 30){
		abo = 100 ;
	}
	if (sexo == 'M' || sexo == 'm' && id < 30){
		abo = 50 ;
	}
	if (sexo == 'F' || sexo == 'f' && id >= 30){
		abo = 200 ;
	}
	if (sexo == 'F' || sexo == 'f' && id < 30){
		abo = 80 ;
	}
	
	//Calculo
	salF = (sal + abo);
	
	//Print F
	printf("\n%s seu salario final eh : R$%.2f\n",nome,salF);
	
	return(0);
	
}
