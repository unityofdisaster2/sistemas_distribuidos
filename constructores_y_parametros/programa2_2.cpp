#include "Fecha.h"
#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    // Fecha fecha1 = Fecha();
    // Fecha fecha2 = Fecha(24,10,2016);
    // fecha1.muestraFecha();
    // fecha2.muestraFecha();

    // cout << "convierte fecha1: " << fecha1.convierte() << endl;
    // cout << "convierte fecha2: " << fecha2.convierte() << endl;
    // int cnt=0;
    // for(int i = 1; i <= 2020; i++)
    // {
    //     fecha2.inicializaFecha(24,10,i);
    //     cnt += (fecha2.leapyr())? 1: 0;
    // }
    // cout << cnt << endl;
    Fecha fecha1 = Fecha();
    Fecha fecha2 = Fecha(15,3,2010);
    Fecha fecha3 = Fecha(32,3,2010);
    Fecha fecha4 = Fecha(21,3,2040);
    return 0;
}
