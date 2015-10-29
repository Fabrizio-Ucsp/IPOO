#include <iostream>
using namespace std;
class Point {
private:
	double x, y;
public:
	Point(double nx, double ny) {
		x = nx; y = ny;
	}
	double getX() { return x; }
	double setX(int x1) { x=x1; }
	double getY() { return y; }
	double setY(int y1) { y=y1; }
};

int main() {
	Point p(0,0);
	int x1,y1;
	cout<<"Ingrese el Valor de X"<<endl;
	cin>>x1;
	p.setX(x1);
	cout << "Introdujo :" << p.getX() << " ,para X" <<endl;
	cout<<"Ingrese el Valor de Y"<<endl;
	cin>>y1;
	p.setY(y1);
	cout << "Introdujo :" << p.getY() << " ,para Y" << endl;
	cout<<"El punto seria: "<<endl;
	cout<<"("<<p.getX()<<","<<p.getY()<<")"<<endl;
}
