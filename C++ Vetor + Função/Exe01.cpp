#include <iostream>
using namespace std;


int parimpar(int num){
	if ((num%2) ==0)
		return 1;
	else
		return -1;
}	

void mostra (int V[], int tam){
	for (int i=0; i<tam; i++){
		cout<<V[i];
		cout<<".";
	}
	
	
}

int main () {
	int N, par, impar, tam, Vpar[100], Vimpar[100]; char op;
	cout << "Informe a quantidade de numeros (ate 100):";
	cin >> tam;
	par=0; impar =0;
	
	
	
	do {
		cout<< "informe um numero inteiro:";
		cin>>N;
		if (parimpar (N) ==1) {
			Vpar[par]=N; par++;}
		else
		{ Vimpar[impar]=N; impar++;}
	cout << "Deseja continuar S/N";
	cin>> op;
	} while ( op == 's' || op == 'S');
	//chmada da fun��o
	
	
	
	cout<<"\n";
	cout << "elementos do vetor par ";
	mostra (Vpar,par);
	cout<<"\n";
	cout << "elementos do vetor impar ";
	mostra (Vimpar,impar);
	cout<<"\n";
	
	
	
	system("PAUSE");
}
