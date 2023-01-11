#include <stdio.h>

main(){
	
	int numeros[15];
	int ind;
	
	for (ind = 0; ind < 15; ind++)
	{
		numeros[ind] = ind * 10;
	}
	
	for (ind = 0; ind < 15; ind++)
	{
		printf("Numero %d eh %d \n",ind,numeros[ind]);
	}
	
	return 0;
}
