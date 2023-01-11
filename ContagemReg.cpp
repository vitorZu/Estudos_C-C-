#include <iostream>
#include <Windows.h>
using namespace std;

main(){
	
	int n,i;
	
	cout<< "Informe um numero que desseja fazer uma contagem regressiva: ";
	cin>>n;
	
	if (n >= 0 ){
		for(i = n; i > -1 ; i--){
			cout<<i;
			Sleep(800); //achei que 1 seg (1000) ficava muito lento
			cout<<"\n";
		}

		
	}else 
	cout<<"Nao foi possivel executar o calculo";
	
	
	
	return 0;
}
