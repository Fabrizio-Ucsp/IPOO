#include <iostream>
#include <string>
using namespace std;
void copiar(string CadenaA,string CadenaB){
	CadenaB=CadenaA;
	cout<<"La cadena B ahora seria: "<<CadenaB<<endl;
}
string juntar(string CadenaA,string CadenaB){
	CadenaA+=CadenaB;
	return CadenaA;
}
int longit(string CadenaA){
	return CadenaA.size();
}
void comp(string CadenaA,string CadenaB){
	if(CadenaA==CadenaB){cout<<"Las cadenas si son iguales"<<endl;}
	else{cout<<"Las cadenas no son iguales"<<endl;}
}
int main(){
	string CadenaA;
	string CadenaB;
	int def;
	cout<<"Escriba una cadena A"<<endl;
	cin>>CadenaA;
	cout<<" "<<endl;
	cout<<"Escriba una cadena B"<<endl;
	cin>>CadenaB;
	cout<<" "<<endl;
	cout<<"Que quiere hacer :"<<endl;
	cout<<"1:Copiar la cadena A en B"<<endl;
	cout<<"2:Juntar las cadenas A y B"<<endl;
	cout<<"3:Saber la Longitud"<<endl;
	cout<<"4:Compara"<<endl;
	cout<<" "<<endl;
	cout<<"Escriba el numero de su opcion: "<<endl;
	cin>>def;
	cout<<" "<<endl;
	if (def==1){
		copiar(CadenaA,CadenaB);
	}
	if (def==2){
		cout<<"Las cadenas juntas serian: "<<juntar(CadenaA,CadenaB)<<endl;
	}
	if (def==3){
		int d;
		cout<<"Quiere saber la longitud de la cadena A o B ?"<<endl;
		cout<<"Escriba 0 o 1 (0 sin quiere saber de A o 1 si quiere saber de B): "<<endl;		
		cin>>d;
		if (d==0){
			cout<<"La longitud de A es :"<<longit(CadenaA)<<endl;
		}
		if (d==1){
			cout<<"La longitud de B es :"<<longit(CadenaB)<<endl;
		}
	}
	if (def==4){
		comp(CadenaA,CadenaB);
	}
}
