#include <iostream>
#include <string>
using namespace std;
string TamanoyPocisionamiento();
int main(){
	TamanoyPocisionamiento();
	return 0;
}
string TamanoyPocisionamiento(){
	string nombre;
	char abc[27]="abcdefghijklmnopqrstuvwxyz";
	cout<<"Ingrese su nombre: "<<endl;
	cin>>nombre;
	cout<<"Su nombre tiene : "<<nombre.size()<<" letras"<<endl;
	cout<<"Las letras de su nombre con su pocisionamiento en el abecedario : "<<endl;
	for(int i=0;i<nombre.size();i++){
		if (nombre[i]==abc[0]){
			cout<<nombre[i]<<" "<<0<<endl;
		}
		if (nombre[i]==abc[1]){
			cout<<nombre[i]<<" "<<1<<endl;
		}
		if (nombre[i]==abc[2]){
			cout<<nombre[i]<<" "<<2<<endl;
		}
		if (nombre[i]==abc[3]){
			cout<<nombre[i]<<" "<<3<<endl;
		}
		if (nombre[i]==abc[4]){
			cout<<nombre[i]<<" "<<4<<endl;
		}
		if (nombre[i]==abc[5]){
			cout<<nombre[i]<<" "<<5<<endl;
		}
		if (nombre[i]==abc[6]){
			cout<<nombre[i]<<" "<<6<<endl;
		}
		if (nombre[i]==abc[7]){
			cout<<nombre[i]<<" "<<7<<endl;
		}
		if (nombre[i]==abc[8]){
			cout<<nombre[i]<<" "<<8<<endl;
		}
		if (nombre[i]==abc[9]){
			cout<<nombre[i]<<" "<<9<<endl;
		}
		if (nombre[i]==abc[10]){
			cout<<nombre[i]<<" "<<10<<endl;
		}
		if (nombre[i]==abc[11]){
			cout<<nombre[i]<<" "<<11<<endl;
		}
		if (nombre[i]==abc[12]){
			cout<<nombre[i]<<" "<<12<<endl;
		}
		if (nombre[i]==abc[13]){
			cout<<nombre[i]<<" "<<13<<endl;
		}
		if (nombre[i]==abc[14]){
			cout<<nombre[i]<<" "<<14<<endl;
		}
		if (nombre[i]==abc[15]){
			cout<<nombre[i]<<" "<<15<<endl;
		}
		if (nombre[i]==abc[16]){
			cout<<nombre[i]<<" "<<16<<endl;
		}
		if (nombre[i]==abc[17]){
			cout<<nombre[i]<<" "<<17<<endl;
		}
		if (nombre[i]==abc[18]){
			cout<<nombre[i]<<" "<<18<<endl;
		}
		if (nombre[i]==abc[19]){
			cout<<nombre[i]<<" "<<19<<endl;
		}
		if (nombre[i]==abc[20]){
			cout<<nombre[i]<<" "<<20<<endl;
		}
		if (nombre[i]==abc[21]){
			cout<<nombre[i]<<" "<<21<<endl;
		}
		if (nombre[i]==abc[22]){
			cout<<nombre[i]<<" "<<22<<endl;
		}
		if (nombre[i]==abc[23]){
			cout<<nombre[i]<<" "<<23<<endl;
		}
		if (nombre[i]==abc[24]){
			cout<<nombre[i]<<" "<<24<<endl;
		}
		if (nombre[i]==abc[25]){
			cout<<nombre[i]<<" "<<25<<endl;
		}
	}
}
