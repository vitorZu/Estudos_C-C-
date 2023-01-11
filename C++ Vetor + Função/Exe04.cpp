#include <iostream>
using namespace std;

void definir (char G[]){
	for(int i = 0; i <= 9; i++){
		cout<<"Digite a alternativa correta da questao numero "<<i+1<<":";
		cin>>G[i];
		cout<<'\n';
		
	}
}

void aluno(char R[]){
	for(int i = 0 ; i <= 9 ;i++){
		cout<<"Digite a resposta do aluno na questao numero "<<i+1<<":";
		cin>>R[i];
		cout<<'\n';
	}
}

int mediaAluno (char G[],char R[]){
	int acertos = 0;
	
	for(int i = 0; i <= 9; i++){
		if(R[i] == G[i]){
			acertos++;
		}
	}
	
	return acertos;
	
}


main(){
	char G[10];
	char R[10];
	int QtdAlunos, AP=0, RP=0;
	char nome[30];
	
	cout<<'\n';
	definir(G);
	//definiu gabarito 
	cout<<'\n';
	cout<<"Quantos alunos Fizeram a Prova: ";
	cin>>QtdAlunos;
	cout<<'\n';
	
	for(int i = 0;i < QtdAlunos;i++){
		cout<<"Insira o nome do "<<i+1<< "° aluno:";
		cin>>nome;
		
		aluno(R);
//		mediaAluno(G,R);
		
		if(mediaAluno(G,R) >= 6 ){
			cout<<'\n';
			cout<<nome<<", foi APROVADO com um total de "<<mediaAluno(G,R)<<" acertos.";
			cout<<'\n';
			AP++;
		}
		if(mediaAluno(G,R) < 6 ){
			cout<<'\n';
			cout<<nome<<", foi REPROVADO com um total de "<<mediaAluno(G,R)<<" acertos.";
			cout<<'\n';
			RP++;
		}
		cout<<'\n';
			
	}
	cout<<'\n';
	cout<<"Foram "<<AP<<" alunos APROVADOS."
	cout<<'\n';
	cout<<"Foram "<<RP<<" alunos REPROVADOS."
	cout<<'\n';
	
	
	
	system("PAUSE");
}
