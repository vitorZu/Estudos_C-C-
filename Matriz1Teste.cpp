#include <stdio.h>

main(){
	
	float b[3][5] = { {2,125},{36,98},{0,115} };
	int i=0,j=0;
	
	for(i = 0; i < 3; i++){
		for(j=0;j < 5; j++){
			b[i][j] = 30;
		}
	}
	
	printf("%f",b[0][0]);
	printf("%f",b[0][1]);
	
	return 0;
}
