#include <iostream>
using namespace std;
int factorial(int a);
int main(){
	int a;
	cout<<"Ingrese un Valor : "<<endl;	
	cin>>a;
	if (a==0){
		cout<<" El factorial de 0 es 1 "<<endl;
	}else{
		cout<<"El factorial de 'a' es : "<<endl;
		cout<<factorial(a)<<endl;
	}
}
int factorial(int a){
	int fac=1;
	for (int b=1 ; b<=a ; b++){
		fac=b*fac;
	}
	return fac;
}
