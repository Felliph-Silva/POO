#include <iostream>
#include "esfera.hpp"

using namespace std;

int main()
{

    int raio=10;
    esfera esfera1(raio);

    float altura = 20;

    cout << "Área = " << esfera1.area() << "\n Volume = " << esfera1.volume() <<  "\n Prenchimento =" << esfera1.preenchimento(altura);

    esfera1.status();
    
    
    return 0;
}