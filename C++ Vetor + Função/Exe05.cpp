#include <iostream>
using namespace std;


void definir (int K[]){
	for(int i = 0; i <= 14; i++){
		cout<<"Digite um numero inteiro ("<<i+1<<"/15): ";
		cin>>K[i];
		cout<<'\n';
		
	}
}


void primo (int K[], int P[], int mult){
	for(int i = 0; i <= 14; i++){
		mult = 0;
		for(int c = 1; c <= K[i] ;c++ ){
			if(K[i] % c == 0){
				mult ++;	
			}
		}
		if(mult<=2){
			P[i]=K[i];
		}else{
			P[i]=0;
		}
	}
}


main(){
	
	int K[15],P[15], mult = 0;
	
	cout<<'\n';
	definir (K);
	primo (K,P,mult);
	
	cout<<'\n';
	cout<<"P vetor de Primos baseado em K : ";
		
	for(int i = 0; i <=14 ; i++){
		if(P[i] > 0){
			cout<<P[i];
			cout<<".";
		}
	}
	cout<<'\n';cout<<'\n';
	
	system("PAUSE");
}
