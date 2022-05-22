#include <iostream>
#include "esfera.hpp"

using namespace std;

int main()
{

    esfera esfera1;

    int raio=10;

    esfera1.setraio(raio);

    cout << "Área = " << esfera1.area() << "\n Volume = " << esfera1.volume() <<  "\n Prenchimento =" << esfera1.preenchimento(21);

    esfera1.status();
    
    
    return 0;
}