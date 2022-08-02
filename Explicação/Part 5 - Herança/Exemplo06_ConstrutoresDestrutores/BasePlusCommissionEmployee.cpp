// Figura 12.25: BasePlusCommissionEmployee.cpp
// Definições de funções-membro da classe BasePlusCommissionEmployee.
#include <iostream>
using std::cout;
using std::endl;

// definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

// construtor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary )
    // chama explicitamente o construtor da classe básica
    : CommissionEmployee( first, last, ssn, sales, rate )
{
    setBaseSalary( salary ); // valida e armazena salário-base

    cout << "BasePlusCommissionEmployee constructor: " << endl;
    print();
    cout << "\n\n";
} // fim do construtor BasePlusCommissionEmployee

// destrutor
BasePlusCommissionEmployee::~BasePlusCommissionEmployee()
{
    cout << "BasePlusCommissionEmployee destructor: " << endl;
    print();
    cout << "\n\n";
} // fim do destrutor BasePlusCommissionEmployee

// configura o salário-base
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
    baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
} // fim da função setBaseSalary

// retorna o salário-base
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
} // fim da função getBaseSalary

// calcula os rendimentos
double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary() + CommissionEmployee::earnings();
} // fim da função earnings

// imprime o objeto BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const
{
    cout << "Base-salaried ";

    // invoca a função print de CommissionEmployee
    CommissionEmployee::print();

    cout << "\nBase salary: " << getBaseSalary();
} // fim da função print