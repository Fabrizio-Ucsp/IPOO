#include <iostream>  
using namespace std;  
int main(){  
   int a=0,i,n;  
         cout<<"Ingrese numero"<<endl;  
         cin>>n;  
         for(i=1;i<(n+1);i++){  
         if(n%i==0){  
             a++;  
            }  
         }  
         if(a!=2){ 
              cout<<"El numero no es Primo";  
            }else{  
                cout<<"El numero si es Primo";  
         }  
    return 0;  
}  
