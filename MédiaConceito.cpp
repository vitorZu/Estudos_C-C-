#include <iostream>
using namespace std;

	
float mediaExercicios (float nota1,float nota2,float nota3){ 
	float mE = 0;
	mE= (nota1+nota2+nota3)/3;
		
	return mE;
}

float mediaApr (float nota1, float nota2,float nota3, float mediaE){
	float resultado = 0;
	resultado = (nota1 + (nota2*2)+(nota3*3)+mediaE)/7;
	
	return resultado;
}
	
main(){
	
	char conceito;
	float n1, n2, n3,mediaEx = 0,media = 0;
	cout<<"Insira valor da nota do primeiro exercicio:", cin>>n1;
	cout<<"Insira valor da nota do segundo exercicio:", cin>>n2;
	cout<<"Insira valor da nota do terceiros exercicio:", cin>>n3;
	
	mediaEx = mediaExercicios(n1,n2,n3);
	media = mediaApr(n1,n2,n3,mediaEx);
	
	
	if(media >= 9){
		conceito = 'A';
	}else if(media >= 7.5 && media <9) {
		conceito = 'B';
	}else if(media >=6 && media <7.5){
		conceito = 'C';
	}else
	conceito = 'D';
	
	cout<<"\n\nCom a média de aproveitamente do aluno igual ha "; cout<<media;
	cout<<"\nO conceito adquirido pelo aluno foi "; cout<<conceito;
	
}
