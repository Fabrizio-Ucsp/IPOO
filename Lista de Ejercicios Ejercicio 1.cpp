#include <iostream>
using namespace std;
int **MatrizA, **MatrizB, **MatrizC;
int FilasDeLaMatrizA, ColumnasDeLaMatrizA, ColumnasDeLaMatrizB;
void CreaciondelaMatrizA(){
	MatrizA = new int *[FilasDeLaMatrizA];
	for(int i = 0; i<FilasDeLaMatrizA; i++){
		MatrizA[i] = new int[ColumnasDeLaMatrizA];
	}
	for(int i = 0; i<FilasDeLaMatrizA; i++){
		for(int j = 0; j<ColumnasDeLaMatrizA; j++){
			cout<<"Valor "<<"("<<i+1<<","<<j+1<<")"<<": ";
			cin>>MatrizA[i][j];
		}
	}
	cout<<" "<<endl;
	cout<<"Matriz A:"<<endl;
	cout<<" "<<endl;
	for(int i = 0; i<FilasDeLaMatrizA; i++){
		for(int j = 0; j<ColumnasDeLaMatrizA; j++){
			cout<<MatrizA[i][j]<<" ";
		}
		cout<<" "<<endl;;
	}
}
void CreaciondelaMatrizB(){
	MatrizB = new int *[ColumnasDeLaMatrizA];
	for(int i = 0; i<ColumnasDeLaMatrizA; i++)    {
		MatrizB[i] = new int[ColumnasDeLaMatrizB];
	}
	for(int i = 0; i<ColumnasDeLaMatrizA; i++){
		for(int j = 0; j<ColumnasDeLaMatrizB; j++){
			cout<<"Valor "<<"("<<i+1<<","<<j+1<<")"<<": ";
			cin>>MatrizB[i][j];
		}
	}
	cout<<" "<<endl;
	cout<<"Matriz B:"<<endl;
	cout<<" "<<endl;
	for(int i = 0; i<ColumnasDeLaMatrizA; i++){
		for(int j = 0; j<ColumnasDeLaMatrizB; j++){
			cout<<MatrizB[i][j]<<" ";
		}
		cout<<" "<<endl;
	}
}
void productMatrix(){
	MatrizC = new int *[FilasDeLaMatrizA];
	for(int i = 0; i<FilasDeLaMatrizA; i++){
		MatrizC[i] = new int[ColumnasDeLaMatrizB];
	}
	for(int i=0; i<FilasDeLaMatrizA; ++i){
		for(int j=0; j<ColumnasDeLaMatrizB; ++j){
			MatrizC[i][j] = 0;
		}
	}
	for(int i=0; i<FilasDeLaMatrizA; ++i){
		for(int j=0; j<ColumnasDeLaMatrizB; ++j){
			for(int z=0; z<ColumnasDeLaMatrizA; ++z){
				MatrizC[i][j] += MatrizA[i][z] * MatrizB[z][j];
			}
		}
	}
	cout<<" "<<endl;
	cout<<"El Producto de las 2 Matrices es:"<<endl;
	for(int i=0; i<FilasDeLaMatrizA; ++i){
		for(int j=0; j<ColumnasDeLaMatrizB; ++j){
			cout<<MatrizC[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	cout<<"Numero de filas de la Matriz A: ";
	cin>>FilasDeLaMatrizA;
	cout<<"Numero de columnas de la Matriz A: ";
	cin>>ColumnasDeLaMatrizA;
	CreaciondelaMatrizA();
	cout<<" "<<endl;;
	cout<<"Numero de filas de la Matriz B: "<<ColumnasDeLaMatrizA<<endl;
	cout<<"Numero de Columnas de la Matriz B: ";
	cin>>ColumnasDeLaMatrizB;
	CreaciondelaMatrizB();
	productMatrix();
	return 0;
}
