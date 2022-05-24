#ifndef _esfera_ //Definição da classe.
#define _esfera_

#include <iostream>
#include <cmath>

using namespace std;

class esfera
{
private:
    float raio; //Atributo encapsulado.

public:

    esfera(float r); //Constutor.
    void setraio(float raio); //Atribuir raio da esfera.
    void status(); //Exibir status da esfera.
    float getraio(); //Retornar raio da esfera
    float area(); //Retornar area da esfera.
    float volume(); //Retornar volume da esfera.
    float preenchimento(float h); //Retornar preencimento da esfera.
};

#endif