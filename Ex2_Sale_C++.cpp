#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float totalP=0, qtd, preco, totalC=0;
	int codC, codP;
	
	cout<<"Digite o codigo do Cliente, ou, prescione '0' para sair: "; cin>>codC;
	while (codC != 0){
		cout<<"Digite o codigo do Produto, ou, digite '-1' para sair: "; cin>>codP;
		
		while (codP != -1){
			cout<<"\nDigite o Pre�o do produto: ";
			cin>>preco;
			
			cout<<"\nDigite a Quantidade comprada: ";
			cin>>qtd;
			
			totalP = preco * qtd;
			totalC += totalP;
			
			cout<<"Digite o codigo do Produto, ou, digite '-1' para sair: "; 
			cin>>codP;
		}
		
		if(totalC >= 1){	
			cout<<"Sua compra deu um TOTAL: R$ "<<totalC>>"\n";
			cout<<"\nDigite o codigo do Cliente, ou, prescione '0' para sair: "; cin>>codC;
			totalP = 0;
			totalC = 0;
		}else
		cout<<"\nDigite o codigo do Cliente, ou, prescione '0' para sair: "; cin>>codC;
		totalP = 0;
		totalC = 0;
	}
	system("pause");
}
