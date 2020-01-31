#include<iostream>
using namespace std;

int main(){
    const float PI = 3.1415926;
    float radio,res;

    cout << "Programa para calcular el area de un circuferencia.\n";
    cout << "Ingrese el valor del radio de la circuferencia: ";
    cin >> radio;

    res = PI * (radio *radio);

    cout << "El area es de " << res << " unidades al cuadrado.\n";

    PI = 5.0;
}
