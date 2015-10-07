#include <iostream>
using namespace std;

int main()
{
	int A[40][40], B[40][40], C[40][40];
	int a, b, c;
	cout<<"Filas de Matriz A: "; cin>>a;
	cout<<"Columnas de Matriz A: "; cin>>b;
	cout<<endl;
	for(int i=0; i<a; ++i)
		for(int j=0; j<b; ++j)
		{
		cout<<"Ingrese valor para Matriz A "<<i<<","<<j<<": ";
		cin>>A[i][j];
	}
	cout<<"Matriz  B."<<endl;
	cout<<"Filas de Matriz B: "<<b<<endl;
	cout<<"Columnas de Matriz B: "; cin>>c;
	cout<<endl;
	for(int i=0; i<b; ++i)
		for(int j=0; j<c; ++j)
		{
		cout<<"Ingrese valor para Matriz B"<<i<<","<<j<<": ";
		cin>>B[i][j];
	}
	for(int i=0; i<a; ++i)
		for(int j=0; j<c; ++j)
			C[i][j] = 0;
	for(int i=0; i<a; ++i)
		for(int j=0; j<c; ++j)
			for(int z=0; z<b; ++z)
				C[i][j] += A[i][z] * B[z][j];
	
	cout<<"Matriz A: ";
	for(int i=0; i<a; ++i)
	{
		for(int j=0; j<b; ++j)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matriz B: ";
	for(int i=0; i<b; ++i)
	{
		for(int j=0; j<c; ++j)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matriz C: ";
	for(int i=0; i<a; ++i)
	{
		for(int j=0; j<c; ++j)
		{
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
