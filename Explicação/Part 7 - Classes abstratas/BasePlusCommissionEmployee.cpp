
// Definições de função-membro BasePlusCommissionEmployee.
#include <iostream>
using std::cout;

// definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

// construtor
    BasePlusCommissionEmployee::BasePlusCommissionEmployee(
            const string &first, const string &last, const string &ssn,
            double sales, double rate, double salary )
        : CommissionEmployee( first, last, ssn, sales, rate )
{
    setBaseSalary( salary ); // valida e armazena o salário-base
} // fim do construtor BasePlusCommissionEmployee

// configura o salário-base
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
    baseSalary = ( ( salary < 0.0 ) ? 0.0 : salary );
} // fim da função setBaseSalary

// retorna o salário-base
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
} // fim da função getBaseSalary

// calcula os rendimentos;
// sobrescreve a função virtual pura earnings em Employee
double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary() + CommissionEmployee::earnings();
} // fim da função earnings

// imprime informações de BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried ";
    CommissionEmployee::print(); // reutilização de código
    cout << "; base salary: " << getBaseSalary();
} // fim da função print