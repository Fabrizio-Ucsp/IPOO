#include<iostream>
#include<conio.h>
#include <iomanip> 
#include <stdlib.h>
void qsort(double [4000000],int, int);
void escribir(double [4000000],int );
using namespace std;
int main(){
	int i,nro;
	double B[4000000];
	nro=4000000;
	for(i=0;i<nro;i++){
		cout<<"B["<<i<<"]= ";
		B[i]=rand()%100;
	}
	cout<<"ARREGLO ORIGINAL"<<endl<<endl;
	for(i=0;i<nro;i++)
	{
		cout<<B[i]<<setw(5);
	}
	qsort(B,0,nro-1);
	escribir(B,nro);
	return 0;
}
void qsort(double A[4000000],int primero,int ultimo){
	int central,i,j;
	double pivote;
	central=(primero+ultimo)/2;
	pivote=A[central];
	i=primero;
	j=ultimo;
	do{
		while(A[i]<pivote) i++;
		while(A[j]>pivote) j--;
		if(i<=j){
			double temp;
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
			i++;
			j--;
		}
	}
	while(i<=j);
	if(primero<j)
		qsort(A,primero,j);
	if(i<ultimo)
		qsort(A,i,ultimo);
}
void escribir(double A[4000000], int n){
	int i;
	cout<<endl<<"ARREGLO ASCENDENTE"<<endl<<endl;
	for(i=0;i<n;i++){
		cout<<A[i]<<setw(5);
	}
}
