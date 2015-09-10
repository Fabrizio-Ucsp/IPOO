#include <iostream.h> 
long potencia(int, int);
int main()
{
        int a, b;
        cout << "Introduce numero: "; cin >> a;
        cout << "Introduce potencia: "; cin >> b;
        cout << "El resultado: " << potencia(a,b)<<endl;
        return 0;
}
long potencia(int a, int b)
{
        if (b<=0)
                return 1;
        else
                return a*potencia(a,b-1);
}
