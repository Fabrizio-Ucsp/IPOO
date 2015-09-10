#include<iostream>
using namespace std;
int fibonacci(int n) {
    if (n==0 || n==1) {
        return 1;
    } else {
        return fibonacci(n-2)+fibonacci(n-1);
    }
}
int main(void){
    int fib;
    cout<<"ingrese un numero"<<endl;
    cin>>fib;
    cout<<fibonacci(fib);
    return 0;
}
