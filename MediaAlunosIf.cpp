//Includes das Bibliotecas
#include <stdio.h>
#include <stdlib.h>

main()
{
	//Decalração de variaveis
	float nt1,nt2,nt3,media;
	
	//Input de dados
	printf("\nEntre com as 3 notas do aluno:\n");
	scanf("%f",&nt1);
	scanf("%f",&nt2);
	scanf("%f",&nt3);
	
	//Calculos
	media = (nt1 + nt2 + nt3) / 3;
	
	//Output's
	printf("Media do aluno: %3.2f\n",media);
	
	if (media > 7 ){
		printf("Aluno Aprovado\n\n\n");
	}
	if (media < 7 && media > 4 ){
		printf ("Aluno de Exame\n\n\n");
	}
	if (media < 4 ){
		printf ("Aluno Reprovado\n\n\n");
	}
	
	//Final
	system("PAUSE");
}
