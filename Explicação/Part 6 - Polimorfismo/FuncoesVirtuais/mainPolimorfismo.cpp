
// Introduzindo polimorfismo, funções virtual e vinculação dinâmica.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

// inclui definições de classe
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
    // cria objeto de classe básica
    CommissionEmployee commissionEmployee(
        "Sue", "Jones", "222-22-2222", 10000, .06 );

    // cria ponteiro de classe básica
    CommissionEmployee *commissionEmployeePtr = 0;

    // cria objeto de classe derivada
    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

    // cria ponteiro de classe derivada
    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = 0;

    // configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision( 2 );

    // gera saída de objetos utilizando vinculação estática
    cout << "Invoking print function on base-class and derived-class "
         << "\nobjects with static binding\n\n";
    commissionEmployee.print(); // vinculação estática
    cout << "\n\n";
    basePlusCommissionEmployee.print(); // vinculação estática

    // gera saída de objetos utilizando vinculação dinâmica
    cout << "\n\n\nInvoking print function on base-class and "
         << "derived-class \nobjects with dynamic binding";

    // aponta o ponteiro de classe básica para o objeto de classe básica e imprime
    commissionEmployeePtr = &commissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer"
         << "\nto base-class object invokes base-class "
         << "print function:\n\n";
    commissionEmployeePtr->print(); // invoca print da classe básica

    // aponta o ponteiro de classe derivada para o objeto de classe derivada e imprime
    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling virtual function print with derived-class "
         << "pointer\nto derived-class object invokes derived-class "
         << "print function:\n\n";
    basePlusCommissionEmployeePtr->print(); // invoca print da classe derivada

    // aponta o ponteiro de classe básica para o objeto de classe derivada e imprime
    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer"
         << "\nto derived-class object invokes derived-class "
         << "print function:\n\n";

    // polimorfismo; invoca print de BasePlusCommissionEmployee;
    // ponteiro de classe básica para objeto de classe derivada
    commissionEmployeePtr->print();
    cout << endl;
    
    return 0;
} // fim de main