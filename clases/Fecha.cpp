#include "Fecha.h"
#include <iostream>

using namespace std;

Fecha::Fecha(int dd, int mm, int aaaa)
{
    mes = mm;
    dia = dd;
    anio = aaaa;
}

void Fecha::inicializaFecha(int dd, int mm, int aaaa)
{
    anio = aaaa;
    mes = mm;
    dia = dd;
    return;
}

void Fecha::muestraFecha()
{
    cout << "la fecha es (dia-mes-anio): " << dia << "-" << mes << "-" << anio << endl;
    return;
}



int Fecha::convierte()
{
    return anio*10000+mes*100+dia;
}

bool Fecha::leapyr()
{
    if(anio%4 == 0)
    {

        return (anio%100 == 0) ? (( anio%400 == 0 ) ? true : false) : true; 
    }
    return false;
}

