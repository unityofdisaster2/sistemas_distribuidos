#include <iostream>
using namespace std;

	int main( )
	{
		double c;
		double f;
		cout << "Ejercicio 3.\n" << "De grados centígrados a Fahrenheit\n";
		cout << "Cuantos grados centigrados deseas convertir? ";
		cin >> c;
		f = (9*c)/5 + 32.0;
		cout << "  " << c << " grados centrigrados son " << f << " Fahrenheit\n";
		return 0;
 	}