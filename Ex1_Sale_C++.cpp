#include <iostream>
using namespace std;

main(){
	int cont=0;
	float soma=0,num,media;
	
	cout<<"Informe um número positivo ou zero para sair: "; cin>>num;
	while(num != 0){
		soma+=num;
		cont++;
		cout<<"Informe um número positivo ou zero para sair: ";
		do{
			cin>>num;
			if (num<0){
				cout<<"Digite um numero válido - número maior ou igual a zero!"<<endl;
			}
			}while (num < 0);
		}
		media = soma/cont;
		cout<<"A média é: "<<media;
		system("pause");
	}
