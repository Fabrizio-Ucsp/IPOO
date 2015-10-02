#include "vector.h"
#include "vector.cpp"
#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
	Vector vec1;
	Circulo cir1;
	cout<<"Ingrese el valor de x inicial :"<<endl;
	cin>>vec1.start.x;
	cout<<"Ingrese el valor de y inicial :"<<endl;
	cin>>vec1.start.y;
	cout<<"Ingrese el valor de x final :"<<endl;
	cin>>vec1.end.x;
	cout<<"Ingrese el valor de y final :"<<endl;
	cin>>vec1.end.y;
	cout<<" "<<endl;
	double distance = vec1.distance();
	vec1.print();
	cout<< "La distancia de los 2 puntos es : "<<distance <<endl;
	cir1.radio=distance;
	double radio= cir1.area();
	cout<< "El radio de la cinrcunferencia: "<<radio <<endl;
}
