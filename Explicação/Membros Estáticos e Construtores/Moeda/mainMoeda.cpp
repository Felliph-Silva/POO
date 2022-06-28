// Arquivo principal: teste da classe Moeda
#include "Moeda.h"

#include <iostream>
using std::cout;
using std::fixed;

int main(void)
{
    Moeda::dolar =  5.00;   // atribuicao de valor do dolar para o atributo estatico da classe     

    Moeda valorA, valorB(450), valorC(100);   // declaração de objetos

    valorA.dolar = 5.64;    // atribuicao do valor do dolar ao atributo estatico da classe
                            // o atributo é único para toda a classe e é acessado
                            // por todos os objetos.

    cout.precision(3);      // define a precisão

    cout << "\n * Valor A em dolar: US$ " << fixed << valorA.toDolar()
         << "\n * Valor B em dolar: US$ " << valorB.toDolar()
         << "\n * Valor C em dolar: US$ " << valorC.toDolar() << "\n\n";

    Moeda::dolar = 5.50;    // atribuicao de valor do dolar para o atributo estatico da classe

    cout << "\n * Valor A em dolar: US$ " << fixed << valorA.toDolar()
         << "\n * Valor B em dolar: US$ " << valorB.toDolar()
         << "\n * Valor C em dolar: US$ " << valorC.toDolar() << "\n\n";

    return 0;
}