// Arquivo principal: teste da classe Moeda
#include "Moeda1.h"

#include <iostream>
using std::cout;
using std::fixed;

int main(void)
{
    Moeda1::valorDolar();     // chamada de método estático público

    Moeda1 valorA, valorB(450), valorC(100);   // declaração de objetos

    cout.precision(3);        // define a precisão para 3

    cout << "\n * Valor A em dolar: US$ " << fixed << valorA.toDolar()
         << "\n * Valor B em dolar: US$ " << valorB.toDolar()
         << "\n * Valor C em dolar: US$ " << valorC.toDolar() << "\n\n";

    Moeda1::valorDolar();       // chamada de método estático público

    cout << "\n * Valor A em dolar: US$ " << valorA.toDolar();

    valorB.valorDolar();        // sintaxe de chamada não recomendada

    cout << "\n * Valor A em dolar: US$ " << valorA.toDolar();

    return 0;
}