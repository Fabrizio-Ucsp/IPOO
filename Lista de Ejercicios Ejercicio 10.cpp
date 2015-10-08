#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std ;
int main () { 
	int num;
	int list[400000];
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	for(int i=0;i<400000;i++){
		list[i]=rand()%100;
		cout<<list[i]<<endl;
	}
	for (int i=0;i<400000;i++){
		if (num == i){
			cout<<"el numero se encuentra en el arreglo"<<endl;
		}
	}
}
