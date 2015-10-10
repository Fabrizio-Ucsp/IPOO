#include <iostream>
#include <stdio.h> 
#define tam 500
int no_repetitions(char palabra[tam],char resultado[tam]);
using namespace std; 
int main() { 
	char resultado[tam]=""; 
	char palabra[tam]; 
	cout<<"Ingresa una palabra"<<endl;
	cin.getline(palabra,tam);
	int i=0,j=0;
	no_repetitions(palabra,resultado);
	cout<<"El palabra sin letras repetidas seria: "<<resultado<<endl; 
	return 0;
}
int no_repetitions(char palabra[tam],char resultado[tam]){
	int i=0,j=0;
	while(palabra[i]) { 
		if(!strchr(resultado,palabra[i])) 
			resultado[j++]=palabra[i]; 
		i++; 
	} 
}
