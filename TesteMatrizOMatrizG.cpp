#include <stdio.h>


main(){
	
	int mato[4][4],matg[4][4],lin,col;
	
	
	printf ("\n Digite a matriz original\n");
	
	for (lin=0;lin<4;lin++){
		for (col=0;col<4;col++){
			scanf("%d",&mato[lin][col]);
			matg[col][lin]=mato[lin][col];
		}
	} 
	printf("\nMatriz Gerada \n");
	for (lin=0;lin<4;lin++){
		for (col=0;col<4;col++){
			printf("%d\n",matg[lin][col]);
		}
	}
}
