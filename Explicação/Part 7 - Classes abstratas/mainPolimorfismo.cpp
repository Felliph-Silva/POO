
// Processando objetos da classe derivada Employee individualmente
// e polimorficamente utilizando vinculação dinâmica.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

// inclui definições de classes na hierarquia Employee
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

void virtualViaPointer( const Employee * const );   // protótipo
void virtualViaReference( const Employee & );       // protótipo

int main()
{
    // configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision( 2 );

    // cria objetos da classe derivada
    SalariedEmployee salariedEmployee(
        "John", "Smith", "111-11-1111", 800 );
    HourlyEmployee hourlyEmployee(
        "Karen", "Price", "222-22-2222", 16.75, 40 );
    CommissionEmployee commissionEmployee(
        "Sue", "Jones", "333-33-3333", 10000, .06 );
    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );

    cout << "Employees processed individually using static binding:\n\n";

    // gera saída de informações e rendimentos dos Employees com vinculação estática
    salariedEmployee.print();
    cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
    hourlyEmployee.print();
    cout << "\nearned $" << hourlyEmployee.earnings() << "\n\n";
    commissionEmployee.print();
    cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
    basePlusCommissionEmployee.print();
    cout << "\nearned $" << basePlusCommissionEmployee.earnings()
         << "\n\n";

    // cria um vector a partir dos quatro ponteiros da classe básica
    vector <Employee *> employees( 4 );

    // inicializa o vector com Employees
    employees[ 0 ] = &salariedEmployee;
    employees[ 1 ] = &hourlyEmployee;
    employees[ 2 ] = &basePlusCommissionEmployee;
    employees[ 3 ] = &commissionEmployee;

    cout << "Employees processed polymorphically via dynamic binding:\n\n";

    // chama virtualViaPointer para imprimir informações e rendimentos
    // de cada Employee utilizando vinculação dinâmica
    cout << "Virtual function calls made off base-class pointers:\n\n";

    for ( size_t i = 0; i < employees.size(); i++ )
        virtualViaPointer( employees[ i ] );

    // chama virtualViaReference para imprimir informações
    // de cada Employee utilizando vinculação dinâmica
    cout << "Virtual function calls made off base-class references:\n\n";

    for ( size_t i = 0; i < employees.size(); i++ )
        virtualViaReference( *employees[ i ] ); // observe o desreferenciamento

    return 0;
} // fim de main

// chama funções print e earnings virtual de Employee a partir de um
// ponteiro de classe básica utilizando vinculação dinâmica
void virtualViaPointer( const Employee * const baseClassPtr )
{
    baseClassPtr->print();
    cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
} // fim da função virtualViaPointer

// chama funções print e earnings virtual de Employee a partir de uma
// referência de classe básica utilizando vinculação dinâmica
void virtualViaReference( const Employee &baseClassRef )
{
    baseClassRef.print();
    cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
} // fim da função virtualViaReference