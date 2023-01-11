#include <iostream>
using namespace std;

int ler_mostrar (int array[],int tam){
	for(int i =0; i < tam ;i++){
		cout<<"Digite um numero:";
		cin>>array[i];
	}
	cout<<"\n";
	for (int i = 0;  i < tam ;i++){
		cout<<array[i];
		cout<<".";
	}
	cout<<"\n";
}

int inverter (int array[] , int tam){
	int arrayInv[tam];
	for(int i = 0; i < tam; i++){
		arrayInv[i]=array[tam-i-1];
		
		cout<<arrayInv[i];
		cout<<'.';
	}
	
	cout<<"\n";
}


main(){
	
	int tam;
	
	cout<<"Digite a quantidade de numeros:";
	cin>>tam;
	
	int array[tam];
	
	ler_mostrar(array , tam);
	cout<<"\n";
	cout<<"\n";
	inverter(array , tam);
	cout<<"\n";
	cout<<"\n";
	
	system("PAUSE");
}
