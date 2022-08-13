
// Definições de função-membro da classe CommissionEmployee.
#include <iostream>
using std::cout;

#include "CommissionEmployee.h" // definição da classe CommissionEmployee

// construtor
CommissionEmployee::CommissionEmployee( const string &first,
                const string &last, const string &ssn, double sales, double rate )
            : Employee( first, last, ssn )
{
    setGrossSales( sales );
    setCommissionRate( rate );
} // fim do construtor CommissionEmployee

// configura a taxa de comissão
void CommissionEmployee::setCommissionRate( double rate )
{
    commissionRate = ( ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0 );
} // fim da função setCommissionRate

// retorna a taxa de comissão
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
} // fim da função getCommissionRate

// configura a quantidade de vendas brutas
void CommissionEmployee::setGrossSales( double sales )
{
    grossSales = ( ( sales < 0.0 ) ? 0.0 : sales );
} // fim da função setGrossSales

// retorna a quantidade de vendas brutas
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
} // fim da função getGrossSales

// calcula os rendimentos;
// sobrescreve a função virtual pura earnings em Employee
double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
} // fim da função earnings

// imprime informações do CommissionEmployee
void CommissionEmployee::print() const
{
    cout << "commission employee: ";
    Employee::print(); // reutilização de código
    cout << "\ngross sales: " << getGrossSales()
         << "; commission rate: " << getCommissionRate();
} // fim da função print