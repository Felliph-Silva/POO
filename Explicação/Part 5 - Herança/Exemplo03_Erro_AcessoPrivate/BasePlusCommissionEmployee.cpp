// Figura 12.11: BasePlusCommissionEmployee.cpp
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
    setBaseSalary( salary ); // valida e armazena salário-base
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
    // a classe derivada não pode acessar dados private da classe básica
    return baseSalary + ( commissionRate * grossSales );
} // fim da função earnings

// imprime o objeto BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const
{
    // a classe derivada não pode acessar dados private da classe básica
    cout << "base-salaried commission employee: " << firstName << ' '
         << lastName << "\nsocial security number: " << socialSecurityNumber
         << "\ngross sales: " << grossSales
         << "\ncommission rate: " << commissionRate
         << "\nbase salary: " << baseSalary;
} // fim da função print
