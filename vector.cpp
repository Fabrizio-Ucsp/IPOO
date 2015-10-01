#include "vector.h"
#include "vector.cpp"
#include <iostream>
#include <math.h>
double Vector::distance(){
	return sqrt(pow((start.x - end.x),2) + pow((start.y - end.y),2) );
}
void Vector::print(){
	cout<< start.x <<endl;
	cout<< start.y <<endl;
	cout<< end.x <<endl;
	cout<< end.y <<endl;
}
double Circulo::area(){
	return 3.14*pow(radio,2);
}
