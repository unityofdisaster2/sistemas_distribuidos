#include <iostream>
#include <unistd.h>

using namespace std;

class Fecha
{
    private:
        int dia;
        int mes;
        int anio;
        int arreglo[20000];
        
    public:
        Fecha(int = 3, int = 4, int = 2014);
        void inicializaFecha(int, int, int);
        void muestraFecha();
        int convierte();

        
};


int Fecha::convierte()
{
    return anio*10000+mes*100+dia;
}


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
    cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
    return;
}


// int masVieja(Fecha fecha1, Fecha fecha2)
// {
//     int f1,f2;
//     f1 = fecha1.convierte();
//     f2 = fecha2.convierte();
//     if(f1 > f2)
//     {
//         return 1;
//     }
//     else if(f1 < f2)
//     {
//         return -1;
//     }
//     return 0;
// }

int masVieja(Fecha &fecha1, Fecha &fecha2)
{
    int f1,f2;
    f1 = fecha1.convierte();
    f2 = fecha2.convierte();
    if(f1 > f2)
    {
        return 1;
    }
    else if(f1 < f2)
    {
        return -1;
    }
    return 0;
}


int main()
{
    Fecha a,b;
    time_t inicio,fin;
    srand(time(NULL));
    cout << sizeof(a) << endl;
    for(int i = 0; i < 1000000; i++)
    time(&inicio);
    {
        for(int j=0; j < 10000000; j++)
        {
            a.inicializaFecha(rand()%31,rand()%12,rand()%2020);
            b.inicializaFecha(rand()%31,rand()%12,rand()%2020);
            masVieja(a,b);

        }

    }
    time(&fin);
    cout << "Tiempo: " << fin - inicio << " segundos" << endl;
    
    return 0;
}