#include <iostream>
using namespace std;
string PalabraEnReversa(string p){
	string r;
	for(int i = p.size()-1; i >= 0; i--)
		r += p[i];
	return r;
}
int main(){
	string palabra, reversa;
	cout<<"Ingrese la Palabra :"<<endl;
	cin >> palabra;
	reversa = PalabraEnReversa(palabra);
	cout<<" "<<endl;
	cout << "La palabra en reversa es :" ;
	cout<<reversa<<endl;
	cout<<" "<<endl;
	if(palabra == reversa)
		cout << "Es palindromo";
	else
		cout << "No es palindromo";
}
