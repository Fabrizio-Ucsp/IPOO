#include <bits/stdc++.h>
using namespace std;

int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

int main() {
	cout<<"a. "<<**matr<<". Si"<<endl;
	cout<<"b. "<<*(*(matr+1)+2)<<". Si"<<endl;
	cout<<"c. "<<*(matr[2]+3)<<". Si"<<endl;
	cout<<"d. "<<(*(matr+2))[2]<<". Si"<<endl;
	cout<<"e. "<<*((*matr)+1)<<". No <- esta es la Falsa :)"<<endl;
}
