#include <iostream>
using namespace std;

void definir (int V[], int tam, int par){
	for(int i =0; i < tam; i++){
		cout<<"Digite um numero inteiro qualquer:  ";
		cin>>V[i];
		
		if(V[i]%2 == 0){
			par++;
		}
	}
	cout<<"\n";
	cout<<"Na Sequencia de Numeros escolhida, ";
	for(int i =0; i < tam; i++){
		cout<<V[i]<<" . ";
	}
	cout<<"\n";
	cout<<"Temos um total de "<<par<<" numeros pares.";
	cout<<"\n";
	cout<<"\n";

}

void par (int V[]){
	
}

main(){
	
	int V[20],tam = 0, par = 0;
	
	cout<<"Digite a quantidade de numeros a ser analisados: ";
	cin>>tam;
	
	definir(V,tam,par);
	
	system("PAUSE");
}
