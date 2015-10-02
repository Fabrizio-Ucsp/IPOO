#include <iostream>
#include <math.h>
using namespace std;
double Vector::distance(){
	return sqrt(pow((start.x - end.x),2) + pow((start.y - end.y),2) );
}
void Vector::print(){
	cout<< "el valor de x inicial es: "<<start.x <<endl;
	cout<< "el valor de y inicial es: "<<start.y <<endl;
	cout<< "el valor de x final es: "<<end.x <<endl;
	cout<< "el valor de y final es: "<<end.y <<endl;
}
double Circulo::area(){
	return 3.14*pow(radio,2);
}
