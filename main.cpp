#include <iostream>
using namespace std;
int cubo (int num){
    return (num*num*num);
}
int main() {
    cout <<endl<< "el cubo de 5 es: " << cubo(5);
    cout <<endl<< "el cubo de 6 es: " << cubo(6);
    cout <<endl<< "el cubo de 7 es: " << cubo(7);
    int Numero;
    cout <<endl<< "Ingresar un numero: ";
    cin>>Numero;
    Numero= cubo(Numero);
    cout <<endl<< "el cubo es: " << Numero;
    return 0;
}
