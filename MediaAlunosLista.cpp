#include <stdio.h>
#include <stdlib.h>

main()
{
	
	//Var´s
	float p1,p2,p3,M; int NC;
	
	//Explicativo do programa
	printf("\n<Esse programa calcula a media da nota de um aluno baseada em 3 provas de mesmos valores.>\n\n");
	
	//Input's
	printf("Insira a nota da primeira prova do aluno:\n");
	scanf("%f",&p1);
	printf("\nInsira a nota da segunda prova do aluno:\n");
	scanf("%f",&p2);
	printf("\nInsira a nota da terceira prova do aluno:\n");
	scanf("%f",&p3);
	printf("Insira o valor da nota minima para aprovacao de um aluno.:\n");
	scanf("%d",&NC);
	
	//Execut
	M = ((p1 + p2 + p3)/3);
	
	//Output's
	if (M > NC){
		printf("A media do aluno foi %.2f, a nota minima para aprovacao eh %d.\nAPROVADO!!!",M,NC);
	}else {
		printf("A media do aluno foi %.2f, a nota minima para aprovacao eh %d.\nREPROVADO!!!",M,NC);
	}
	
	return 0;
	
}
