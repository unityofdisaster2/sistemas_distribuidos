#include <iostream>
#include <vector>
#include <unistd.h>
#include <random>
#include <math.h>
#include <algorithm>
using namespace std;

class Coordenada
{
    private:
        double x;
        double y;
        double magnitud;
    public:
        Coordenada(double = 0, double = 0);
        void inicializaCoordenada(double,double);
        double obtenerMagnitud();
        double obtenerX();
        double obtenerY();
};


bool comparador(Coordenada a, Coordenada b)
{
    return a.obtenerX() > b.obtenerX();
}

Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy)
{ 
    magnitud = sqrt(pow(x,2)+pow(y,2));
}


void Coordenada::inicializaCoordenada(double xx, double yy)
{
    x = xx;
    y = yy;
    magnitud = sqrt(pow(x,2)+pow(y,2));
}


double Coordenada::obtenerX()
{
    return x;
}

double Coordenada::obtenerY()
{
    return y;
}

double Coordenada::obtenerMagnitud()
{
    return magnitud;
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
        void ordenaA();
};

int PoligonoIrreg::getNumVertices()
{
    return numVertices;
}

void PoligonoIrreg::ordenaA()
{
    sort(vertices.begin(), vertices.end(),&comparador);
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
    vector<Coordenada>::iterator i;

    for(i = vertices.begin() ; i != vertices.end(); i++)
    {
        cout << "X: " << (*i).obtenerX();
        cout << " Y: " << (*i).obtenerY();
        cout << " Mag: " << (*i).obtenerMagnitud() << endl;

        
    }
}


double generaAleatorio(int,int);

int main(int argc, char const *argv[])
{
    random_device rd;
    //semilla aleatoria
    default_random_engine generador(rd());
    uniform_real_distribution<double> distribucion(-100,100);
    PoligonoIrreg poligono;

    for(int i = 0; i<=10; i++)
    {
        poligono.anadeVertice(Coordenada(distribucion(generador),distribucion(generador)));
    }

    poligono.imprimeVertices();
    printf("\n\n\n\n\n\nOrdenado por X: \n\n\n\n\n\n");
    poligono.ordenaA();
    poligono.imprimeVertices();

    return 0;
}


