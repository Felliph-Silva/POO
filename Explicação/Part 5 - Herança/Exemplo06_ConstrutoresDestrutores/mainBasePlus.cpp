// Figura 12.26: fig12_26.cpp
// Ordem de exibição em que a classe básica e construtores e destrutores
// da classe derivada são chamados.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

// definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

int main()
{
    // configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision( 2 );

    { // inicia novo escopo
        CommissionEmployee employee1("Bob", "Lewis", "333-33-3333", 5000, .04 );        
    } // termina o escopo

    cout << endl;
    BasePlusCommissionEmployee employee2( "Lisa", "Jones", "555-55-5555", 2000, .06, 800 );
    
    cout << endl;
    BasePlusCommissionEmployee employee3( "Mark", "Sands", "888-88-8888", 8000, .15, 2000 );

    cout << endl;
    return 0;
} // fim de main