#include <iostream>
using namespace std;


////////////////////////
//A Diagonal principal se dá quando o numero da coluna é o mesmo que o numero da linha.
// usando esse racíocinio, fiz um looping que verifica se essa condição é verdadeira ou falsa,
// e baseado nessa condicional ele defini o valor 0 ou 1.
////////////////////////

gerando(int M[5][5]){
		
		int lin=0 , col=0;
		
		for (lin=0;lin<5;lin++){
			for (col=0;col<5;col++){
				if (lin == col){
					M[lin][col]=1;
				}else 
				M[lin][col]=0;
			}
		}
}


lendo(int M[5][5]){
	
		int lin=0 , col=0;
				
		for (lin=0;lin<5;lin++){
			for (col=0;col<5;col++){
				cout<<M[lin][col];
				cout<<" ";
			}
			cout<<"\n";
		}
}

main(){
		
		int M[5][5];
		
	gerando(M);
	
	lendo(M);
	
	return 0;
}

// Resultado:
////////////////////////
// Matrix 5x5 :
//				1 0 0 0 0
//				0 1 0 0 0
//				0 0 1 0 0
//				0 0 0 1 0
//				0 0 0 0 1
////////////////////////
