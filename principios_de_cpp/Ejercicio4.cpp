#include <iostream>
using namespace std;

	int main( )
	{
		int c;
		double f;
		cout << "Ejercicio 4.\n" << "De grados centígrados a Fahrenheit con cast\n";
		cout << "Cuantos grados centigrados deseas convertir? ";
		cin >> c;
		f = (9*static_cast<double>(c))/5 + 32.0;
		cout << "  " << c << " grados centrigrados son " << f << " Fahrenheit\n";
		return 0;
 	}