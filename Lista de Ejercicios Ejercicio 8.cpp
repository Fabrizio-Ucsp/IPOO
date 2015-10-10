#include <ctype.h> 
#include <iostream>
#define tam 200
using namespace std;
int mayus();
int main() { 
	char nombre[tam]; 
	mayus();
	return 0; 
}
int mayus(){
	char nombre[tam]; 
	char *pnombre;
	pnombre=nombre;
	cout<<"Ingrese una frase: "<<endl;; 
	cin.getline(nombre,tam);
	nombre[0]=toupper(nombre[0]);
	for (int i=0;i<100;i++){
		if (nombre[i] == ' '){
			nombre[i+1]=toupper(nombre[i+1]);
		}
	}
	cout<<"La frase modificada seria: "<<endl;
	cout<<nombre<<endl;
}
