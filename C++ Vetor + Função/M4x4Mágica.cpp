#include <iostream>
#include <locale.h>
using namespace std;

//Crio a Matrix linha por linha pelo input do usuário, já que ele irá testar uma matriz que desejar.
criando(int M[4][4]){
	
	int lin=0 , col=0;

	for (lin = 0; lin < 4; lin++){
		cout<<"Digite os valores da ";
		cout<<lin+1<<"° linha: \n";
		for (col = 0; col < 4; col++){
			cin>>M[lin][col];
		}
	}
}

//Mostro ao usuário como ficou sua matriz visualmente.
lendo(int M[4][4]){
	
	int lin=0 , col=0;
	
	cout<<"\n";
	cout<<"Matrix 4x4 :";
	cout<<"\n";
	for (lin = 0; lin < 4; lin++){
		for (col = 0; col < 4; col++){
			cout<<M[lin][col];
			cout<<" ";
		}
		cout<<"\n";
	}
	
}

//Então calculo todas as variaveis de soma para fazer uma comparação final entre todas, e declarar se é ou não um quadrado mágico.
calculando(int M[4][4]){
	int lin1=0, lin2=0, lin3=0, lin4=0, DP=0,DS=0,col1=0,col2=0,col3=0,col4=0;
	int lin=0 , col=0;
	
	for(int c = 0; c < 4; c++){
		lin1 += M[0][c];
		lin2 += M[1][c];
		lin3 += M[2][c];
		lin4 += M[3][c];
		col1 += M[c][0];
		col2 += M[c][1];
		col3 += M[c][2];
		col4 += M[c][3];
	}	
	
	for (lin=0;lin<5;lin++){
		for (col=0;col<5;col++){
			if (lin == col){
				DP += M[lin][col];
			}
			if (lin + col == 3){
				DS += M[lin][col];
			}
		}	
	}
	
	if(lin1 == lin2 && lin2 == lin3 && lin3 == lin4 && lin4 == col1 && col1 == col2 && col2 == col3 && col3 == col4 && col4 == DP && DP == DS ){
		cout<<"\n";
		cout<<"\n";
		cout<<" Sim! Essa Matriz se trata de uma matriz de quadrado mágico.";
		cout<<"\n";
	}else{
		cout<<"\n";
		cout<<"\n";
		cout<<" Não! Essa Matriz não se trata de uma Matriz de quadrado mágico";
		cout<<"\n";
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	  
	int M[4][4];
	
	criando(M);
	
	lendo(M);
	
	calculando(M);
	
	return 0;
}
