
// Definições de função-membro da classe CommissionEmployee.
#include <iostream>
using std::cout;

#include "CommissionEmployee.h" // definição da classe CommissionEmployee

// construtor
CommissionEmployee::CommissionEmployee(
            const string &first, const string &last, const string &ssn,
            double sales, double rate )
            : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
    setGrossSales( sales ); // valida e armazena as vendas brutas
    setCommissionRate( rate ); // valida e armazena a taxa de comissão
} // fim do construtor CommissionEmployee

// configura o nome
void CommissionEmployee::setFirstName( const string &first )
{
    firstName = first; // deve validar
} // fim da função setFirstName

// retorna o nome
string CommissionEmployee::getFirstName() const
{
    return firstName;
} // fim da função getFirstName

// configura o sobrenome
void CommissionEmployee::setLastName( const string &last )
{
    lastName = last; // deve validar
} // fim da função setLastName

// retorna o sobrenome
string CommissionEmployee::getLastName() const
{
    return lastName;
} // fim da função getLastName

// configura o SSN
void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn; // deve validar
} // fim da função setSocialSecurityNumber

// retorna o SSN
string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
} // fim da função getSocialSecurityNumber

// configura a quantidade de vendas brutas
void CommissionEmployee::setGrossSales( double sales )
{
    grossSales = ( sales < 0.0 ) ? 0.0 : sales;
} // fim da função setGrossSales

// retorna a quantidade de vendas brutas
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
} // fim da função getGrossSales

// configura a taxa de comissão
void CommissionEmployee::setCommissionRate( double rate )
{
    commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
} // fim da função setCommissionRate

// retorna a taxa de comissão
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
} // fim da função getCommissionRate

// calcula os rendimentos
double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
} // fim da função earnings

// imprime o objeto CommissionEmployee
void CommissionEmployee::print() const
{
    cout << "commission employee: "
         << getFirstName() << ' ' << getLastName()
         << "\nsocial security number: " << getSocialSecurityNumber()
         << "\ngross sales: " << getGrossSales()
         << "\ncommission rate: " << getCommissionRate();
} // fim da função print