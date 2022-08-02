// Figura 12.8: BasePlusCommissionEmployee.cpp
// Definições de função-membro da classe BasePlusCommissionEmployee.
#include <iostream>
using std::cout;

// definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

// construtor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
            const string &first, const string &last, const string &ssn,
            double sales, double rate, double salary )
{
    firstName = first; // deve validar
    lastName = last; // deve validar
    socialSecurityNumber = ssn; // deve validar
    setGrossSales( sales ); // valida e armazena as vendas brutas
    setCommissionRate( rate ); // valida e armazena a taxa de comissão
    setBaseSalary( salary ); // valida e armazena salário-base
} // fim do construtor BasePlusCommissionEmployee

// configura o nome
void BasePlusCommissionEmployee::setFirstName( const string &first )
{
    firstName = first; // deve validar
} // fim da função setFirstName

// retorna o nome
string BasePlusCommissionEmployee::getFirstName() const
{
    return firstName;
} // fim da função getFirstName

// configura o sobrenome
void BasePlusCommissionEmployee::setLastName( const string &last )
{
    lastName = last; // deve validar
} // fim da função setLastName

// retorna o sobrenome
string BasePlusCommissionEmployee::getLastName() const
{
    return lastName;
} // fim da função getLastName

// configura o SSN
void BasePlusCommissionEmployee::setSocialSecurityNumber(const string &ssn )
{
    socialSecurityNumber = ssn; // deve validar
} // fim da função setSocialSecurityNumber

// retorna o SSN
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
} // fim da função getSocialSecurityNumber

// configura a quantidade de vendas brutas
void BasePlusCommissionEmployee::setGrossSales( double sales )
{
    grossSales = ( sales < 0.0 ) ? 0.0 : sales;
} // fim da função setGrossSales

// retorna a quantidade de vendas brutas
double BasePlusCommissionEmployee::getGrossSales() const
{
    return grossSales;
} // fim da função getGrossSales

// configura a taxa de comissão
void BasePlusCommissionEmployee::setCommissionRate( double rate )
{
    commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
} // fim da função setCommissionRate

// retorna a taxa de comissão
double BasePlusCommissionEmployee::getCommissionRate() const
{
    return commissionRate;
} // fim da função getCommissionRate

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
    return baseSalary + ( commissionRate * grossSales );
} // fim da função earnings

// imprime o objeto BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const
{
    cout << "Base-salaried commission employee: " << firstName << ' '
         << lastName << "\nSocial security number: " << socialSecurityNumber
         << "\nGross sales: " << grossSales
         << "\nCommission rate: " << commissionRate
         << "\nBase salary: " << baseSalary;
} // fim da função print