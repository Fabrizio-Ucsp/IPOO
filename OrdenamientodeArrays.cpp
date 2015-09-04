#include <stdlib.h> 
#include <iostream> 

using namespace std; 
void ordenar_numeros(int x[], int lon=10){ 
        int Temp; 
         for(int i=0;i<lon;i++) 
                for(int j=0;j<lon-1;j++) 
                    if(x[j]<x[j+1]){
                        Temp=x[j]; 
                        x[j]=x[j+1]; 
                        x[j+1]=Temp;} 

                 for(int i=0;i<lon;i++) 
                    cout<<x[i]<<endl; 
                        } 
        main(){ 
        int lon=10,n; 
        int x[lon]; 
        for(int i=0;i<lon;i++){ 
            cout<<"Ingresa el numero "<<i+1<<": "; 
            cin>>n; 
            x[i]=n; 
            } 
            cout<<endl<<"Numeros ordenados: "<<endl; 
            ordenar_numeros(x,lon);  
        } 
