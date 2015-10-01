#include "vector.h"
#include "vector.cpp"
#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
	Vector vec1;
	Circulo cir1;
	vec1.start.x = 0.0;
	vec1.start.y = 0.0;
	vec1.end.x = 0.0;
	vec1.end.y = 5.0;
	double distance = vec1.distance();
	cout<< distance <<endl;
	vec1.print();
	cir1.radio=distance;
	double radio= cir1.area();
	cout<< radio <<endl;
	
}
