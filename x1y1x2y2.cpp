#include <iostream>
#include <math.h>
using namespace std;

float distancia(float x1, float y1, float x2, float y2) {
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));

}

int main() {
    float x1,y1,x2,y2;

    cout<<"\nInforme as coordenadas para o primeiro ponto: "; 
	cin>>x1>>y1;
    
    cout<<"Informe as coordenadas para o segundo ponto: ";
    cin>>x2>>y2;

    cout<< "A distancia eh : "<<distancia(x1,y1,x2,y2);
    
    return 0;
}
