#include<iostream>
using namespace std;

int main()
{
	cout<<"Ejercicio 5: \n";
	int num=2;
	int res;
	res = num+(++num);
	cout<<"Ejercicio 6: \n";
	cout<<"Numero es: "<<res<<"\n";
	double precio = 78.7;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"El precio es: "<<precio<<"\n";
}
