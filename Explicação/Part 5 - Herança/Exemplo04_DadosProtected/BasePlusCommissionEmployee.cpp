// Figura 12.15: BasePlusCommissionEmployee.cpp
// Definições de função-membro da classe BasePlusCommissionEmployee.
#include <iostream>
using std::cout;

// definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

// construtor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
        const string &first, const string &last, const string &ssn,
        double sales, double rate, double salary )
    // chama explicitamente o construtor da classe básica
    : CommissionEmployee( first, last, ssn, sales, rate )
{
    setBaseSalary( salary ); // valida e armazena o salário-base
} // fim do construtor BasePlusCommissionEmployee

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
    // pode acessar dados protected da classe básica
    return baseSalary + ( commissionRate * grossSales );
} // fim da função earnings

// imprime o objeto BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const
{
    // pode acessar dados protected da classe básica
    cout << "Base-salaried commission employee: " << getFirstName() << ' '
         << lastName << "\nSocial security number: " << socialSecurityNumber
         << "\nGross sales: " << grossSales
         << "\nCommission rate: " << commissionRate
         << "\nBase salary: " << baseSalary;
} // fim da função print