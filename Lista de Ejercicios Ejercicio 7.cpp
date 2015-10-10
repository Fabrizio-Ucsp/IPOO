#include <iostream>
using namespace std;

int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

int main() {
	cout<<"a. **matr es igual a "<< **matr <<" : Verdadero" <<endl;
	cout<<"b. *(*(matr+1)+2) es igual a "<< *(*(matr+1)+2) <<" : Verdadero"<<endl;
	cout<<"c. *(matr[2]+3) es igual a "<<*(matr[2]+3)<<" : Verdadero"<<endl;
	cout<<"d. (*(matr+2))[2] es igual a "<<(*(matr+2))[2]<< " : Verdadero"<<endl;
	cout<<"e. *((*matr)+1) es igual a 5"<<" : Falso , la verdadera respues es : "<<*((*matr)+1)<<endl;
}
