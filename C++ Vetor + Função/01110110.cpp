#include <stdio.h>

main()
{
	
	int mat[5][5],lin,col;
	
	for (lin=0;lin<5;lin++){
		for (col=0;col<5;col++){
			if (lin == col){
				mat[lin][col]=1;
			}else 
			mat[lin][col]=0;
		}
	}
	
	for (lin=0;lin<5;lin++){
		for (col=0;col<5;col++){
			printf("%d",mat[lin][col]);
			
		}
		printf("\n");
	}
	return 0;
}

////////////////////////
// Matrix 5x5 :
//				10000
//				01000
//				00100
//				00010
//				00001
////////////////////////
