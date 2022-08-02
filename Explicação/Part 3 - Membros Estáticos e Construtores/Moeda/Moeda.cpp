// Implementacao da classe Moeda

#include "Moeda.h"    // include do arquivo de cabeçalho da classe

#include <iostream>
using std::cout;
using std::cin;

/*static*/ float Moeda::dolar;  // associacao do atributo estatico à classe

// construtor sem parâmetros
Moeda::Moeda()
{
    cout << "\n -> Digite valor em real (R$): ";
    cin >> real;
}   

// construtor: recebe valor em real
Moeda::Moeda(float r)
{
    real = r;
}         

// converte valor de atributo para dolar
float Moeda::toDolar()
{
    return (real / dolar);
}        