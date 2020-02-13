#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;

class Coordenada
{
    private:
        double x;
        double y;
    public:
        Coordenada(double = 0, double = 0);
        void inicializaCoordenada(double,double);
        double obtenerX();
        double obtenerY();
};


Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy)
{ }


void Coordenada::inicializaCoordenada(double xx, double yy)
{
    x = xx;
    y = yy;
}


double Coordenada::obtenerX()
{
    return x;
}

double Coordenada::obtenerY()
{
    return y;
}

class PoligonoIrreg{
    private:
        vector<Coordenada> vertices;
        static int numVertices;
    public:
        static int getNumVertices();
        vector<Coordenada> getVertices(); 
        void anadeVertice(Coordenada);
        void imprimeVertices();
        void insertaCoordenada(int, double, double);
        void inicializaVertices(int);
        int tamanoVertices();
};

int PoligonoIrreg::getNumVertices()
{
    return numVertices;
}

int PoligonoIrreg::tamanoVertices()
{
    return vertices.capacity();
}

void PoligonoIrreg::inicializaVertices(int m)
{
    vertices.reserve(m);
}

void PoligonoIrreg::insertaCoordenada(int index, double x, double y)
{
    numVertices++;
    vertices[index].inicializaCoordenada(x,y);
}

vector<Coordenada> PoligonoIrreg::getVertices()
{
    return vertices;
}


int PoligonoIrreg::numVertices = 0;

void PoligonoIrreg::anadeVertice(Coordenada c)
{
    numVertices++;
    vertices.push_back(c);
}



void PoligonoIrreg::imprimeVertices()
{
    for(int i =0 ; i < vertices.size(); i++)
    {
        cout << "X: " << vertices[i].obtenerX() << " Y: " << vertices[i].obtenerY() << endl;
    }
}


int main(int argc, char const *argv[])
{
    PoligonoIrreg poligono;
    int n = 100000, m = 10000;
    time_t inicio, fin;
    vector<PoligonoIrreg> poligonosIrregulares(n);
    
    
    // for(int i = 10; i<=10; i++)
    // {
    //     poligono.anadeVertice(Coordenada(rand()%100,rand()%100));
    // }
    // poligono.imprimeVertices();
    time(&inicio);
    for(int i = 0; i < poligonosIrregulares.size(); i++)
    {
        for(int j = 0; j < rand()%m; j++)
        {
            poligonosIrregulares[i].anadeVertice(Coordenada(rand()%100,rand()%100));
        }
    }
    // poligonosIrregulares.reserve(n);
    // for(int i = 0; i < poligonosIrregulares.capacity(); i++)
    // {
    //     poligonosIrregulares[i].inicializaVertices(rand()%100);
    //     for(int j = 0; j < poligonosIrregulares[i].tamanoVertices(); j++)
    //     {
    //         poligonosIrregulares[i].insertaCoordenada(j,rand()%100,rand()%100);
            
    //     }
    // }
    time(&fin);
    cout << "Tiempo: " << fin-inicio << " segundos" << endl;
    //cout << poligonosIrregulares[0].getNumVertices()<< endl;
    return 0;
}
