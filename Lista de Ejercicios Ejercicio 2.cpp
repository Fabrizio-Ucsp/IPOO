#include <iostream>
#include <string>
#include <stdio.h> 
#include <string.h> 
#include <conio.h>
#include <iostream>
using namespace std; 
int main() 
{ 
	char resultado[27]=""; 
	char palabra[50]; 
	int i=0,j=0; 
	cout<<"Ingresa una palabra"<<endl;
	cin>>palabra; 
	while(palabra[i]) { 
		if(!strchr(resultado,palabra[i])) 
			resultado[j++]=palabra[i]; 
		i++; 
	} 
	resultado[j]='\0'; 
	cout<<"El palabra sin letras repetidas seria: "<<resultado<<endl; 
	return 0;
}
