#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//Gerei os vetores de forma randomica.

criandoVet(int vet1[20], int vet2[20]){
	
	srand(time(0));
	
	for(int c =0; c<20;c++){
		vet1[c] = rand()%100;
		vet2[c] = rand()%100;
	}
}

//quando a posição for par, ou seja, quando o resultado da divisão do indice por 2 for 0,
//ele pega a valor do segundo vetor, quando foi impar, pega o valor do peimeiro vetor.

calculando(int vet1[20],int vet2[20],int vet3[20]){
	
	for(int i = 0; i < 20; i++){
		if(i % 2 == 0){
			vet3[i] = vet2[i];
		}else{
			vet3[i] = vet1[i];
		}
	}
	
}


//Fiz a leitura dos vetores de forma mais estética para ver o resultado do calculo de vetores.
main(){
	
	int vet1[20], vet2[20], vet3[20];
	
	criandoVet(vet1, vet2);
	
	calculando(vet1, vet2, vet3);
	
	
	cout<<"Vetor 1 = {";
	for(int c =0; c<20;c++){
		cout<<vet1[c];
		cout<<" ";
	}
	cout<<"}";
	
	cout<<"\n";
	cout<<"\n";
	
	cout<<"Vetor 2 = {";
	for(int c =0; c<20;c++){
		cout<<vet2[c];
		cout<<" ";
	}
	cout<<"}";
	
	cout<<"\n";
	cout<<"\n";
	
	cout<<"Vetor 3 = {";
	for(int c =0; c<20;c++){
		cout<<vet3[c];
		cout<<" ";
	}
	cout<<"}";
	
	cout<<"\n";
	cout<<"\n";
	
	return 0;
}
