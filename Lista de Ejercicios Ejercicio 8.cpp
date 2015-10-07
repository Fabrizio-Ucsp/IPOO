#include <ctype.h> 
#include <iostream>
using namespace std;
int main() { 
	char nombre[100]; 
	cout<<"Ingrese una palabra: "<<endl;; 
	cin>>nombre;
	nombre[0]=toupper(nombre[0]);
	cout<<"La palabra nueva seria: "<<nombre<<endl; 
	return 0; 
}
