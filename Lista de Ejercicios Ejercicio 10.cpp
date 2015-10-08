#include <fstream>
#include <string>
#include <iostream>	
using namespace std;
string impr(string line);
int main () {
	string line;
	impr(line);
	return 0;
}
string impr(string line){
	 ifstream myfile ("texto.txt");
	 if (myfile.is_open())
	 {
		 while ( getline (myfile,line) )
		 {
			 cout << line << '\n';
		 }
		 myfile.close();
	 }
 }
