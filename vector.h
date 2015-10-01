//vector1.h

class Point {
public:
	double x, y;
};

class Vector {
public:
	Point start, end;
	double distance();
	void print();
};

class Circulo {
public:
	double radio;
	double area();
};
