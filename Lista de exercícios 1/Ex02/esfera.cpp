#include "esfera.hpp"

using namespace std;

void esfera::setraio(float r)
{
    raio = r;
}

void esfera::status()
{
    cout << endl << raio << endl << area() << endl << volume() << endl;
}

float esfera::getraio()
{
    return raio;
}

float esfera::area()
{
    float area = 4 * M_PI * (pow (raio, 2));

    return area;
}

float esfera::volume()
{
    float volume = (4 * M_PI * pow(raio, 3)) / 3;

    return volume;
}

float esfera::preenchimento(float altura)
{
    if (altura > 0 && altura <= 2*raio)
    {
        float prechmnt = ((M_PI * altura) / 6) * (3 * pow(M_PI,2) + pow(altura,2));
        return prechmnt;
    }

    else
    {
        cerr << "Altura inválida\n";
        return -1;
    }
}