#include <ctype.h> 
#include <iostream>
using namespace std;
int mayus();
int main() { 
	char nombre[100]; 
	mayus();
	return 0; 
}
int mayus(){
	char nombre[100]; 
	char *pnombre;
	pnombre=nombre;
	cout<<"Ingrese una frase: "<<endl;; 
	cin.getline(nombre,100);
	nombre[0]=toupper(nombre[0]);
	for (int i=0;i<100;i++){
		if (nombre[i] == ' '){
			nombre[i+1]=toupper(nombre[i+1]);
		}
	}
	cout<<nombre<<endl;
}
