#include <iostream>
#include <math.h>
#include "Vector.h"
using namespace std;

class Point{
public:
	double x,y;
};

class Vector{
public:
	Point start, end;
	int distancia(Vector vec1.end.x, vec1.start.x, vec1.end.y, vec1.start.y){
		int result;
		result=sqrt(pow(((vec1.end.x)-(vec1.start.x)),2)+pow(((vec1.end.y)-(vec1.start.y)),2));
		return result;
	}
	
};

class Circulo{
public:
	float radio;
	float area(Circulo rad,float Pi){
		int areacirculo;
		areacirculo=Pi*pow(rad.2);
		return areacirculo;
	}
};

int main() {
	float Pi=3.14
	Vector vec1;
	Circulo rad1;
	vec1.start.x = 3.0;
	vec1.start.y = 4.0;
	vec1.end.x = 5.0;
	vec1.end.y = 6.0;
	distancia(vec1.start.x, vec1.start.y, vec1.end.x, vec1.end.y );
	cout<<distancia<<endl;
	rad1=distacia;
	area(rad,Pi);
}
