#include <iostream>
using namespace std;

main(){
	int cont=0;
	float soma=0,num,media;
	
	cout<<"Informe um n�mero positivo ou zero para sair: "; cin>>num;
	while(num != 0){
		soma+=num;
		cont++;
		cout<<"Informe um n�mero positivo ou zero para sair: ";
		do{
			cin>>num;
			if (num<0){
				cout<<"Digite um numero v�lido - n�mero maior ou igual a zero!"<<endl;
			}
			}while (num < 0);
		}
		media = soma/cont;
		cout<<"A m�dia �: "<<media;
		system("pause");
	}
