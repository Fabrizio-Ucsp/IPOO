#include <iostream>
#include <algorithm> 
using namespace std;
long Arreglo[4000000];
long var=4000000;
void InicializacionDelArray(){
	Arreglo[1] = Arreglo[var];
	for(int i = 0; i<var; i++){
		Arreglo[i]=rand() % 4000000;
	}
	cout<<"El arreglo es: ";
	for(int i = 0; i<var; i++){
		cout<<Arreglo[i]<<endl;
	};
}
void ssort(){
	int temp;
	for(int i=0; i<var;i++){
		for(int j=0;j<var-1;j++){
			if(Arreglo[j]>Arreglo[j+1]){
				temp=Arreglo[j];
				Arreglo[j]=Arreglo[j+1];
				Arreglo[j+1]=temp;
			}
		}
	}
	for(int i=0;i<var;i++){
		cout<<Arreglo[i]<<endl;
	}
} 
void sort(){
	sort(Arreglo, Arreglo+var);
	for(int i = 0; i<var; i++){
		cout<<Arreglo[i]<<endl;
	}
}
int main(){
	InicializacionDelArray();
	cout<<"El arreglo ordenado con ssort es: ";
	ssort();
	cout<<"El arreglo ordenado con sort es: ";
	sort();
	return 0;
}
