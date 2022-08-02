// Implementacao da classe Moeda

#include "Moeda1.h"    // include do arquivo de cabeçalho da classe

#include <iostream>
using std::cout;
using std::cin;

/*static*/ float Moeda1::dolar;  // associacao do atributo estatico à classe

// construtor sem parâmetros
Moeda1::Moeda1()
{
    cout << "\n -> Digite valor em real (R$): ";
    cin >> real;
}   

// construtor: recebe valor em real
Moeda1::Moeda1(float r)
{
    real = r;
}         

// converte valor de atributo para dolar
float Moeda1::toDolar()
{
    return (real / dolar);
}    

/*static*/ void Moeda1::valorDolar()
{
    cout << "\n -> Digite o valor do dolar em reais (R$): ";
    cin >> dolar;
}