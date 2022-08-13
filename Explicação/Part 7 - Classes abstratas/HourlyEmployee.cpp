
// Definições de função-membro da classe HourlyEmployee.
#include <iostream>
using std::cout;

#include "HourlyEmployee.h" // definição da classe HourlyEmployee

// construtor
HourlyEmployee::HourlyEmployee( const string &first, const string &last,
                    const string &ssn, double hourlyWage, double hoursWorked )
               : Employee( first, last, ssn )
{
    setWage( hourlyWage ); // valida a remuneração por hora
    setHours( hoursWorked ); // valida as horas trabalhadas
} // fim do construtor HourlyEmployee

// configura a remuneração
void HourlyEmployee::setWage( double hourlyWage )
{
    wage = ( hourlyWage < 0.0 ? 0.0 : hourlyWage );
} // fim da função setWage

// retorna a remuneração
double HourlyEmployee::getWage() const
{
    return wage;
} // fim da função getWage

// configura as horas trabalhadas
void HourlyEmployee::setHours( double hoursWorked )
{
    hours = ( ( ( hoursWorked >= 0.0 ) && ( hoursWorked <= 168.0 ) ) ?
            hoursWorked : 0.0 );
} // fim da função setHours

// retorna as horas trabalhadas
double HourlyEmployee::getHours() const
{
    return hours;
} // fim da função getHours

// calcula os rendimentos;
// sobrescreve a função virtual pura earnings em Employee
double HourlyEmployee::earnings() const
{
    if ( getHours() <= 40 ) // nenhuma hora extra
        return getWage() * getHours();
    else    
        return 40 * getWage() + ( ( getHours() - 40 ) * getWage() * 1.5 );
} // fim da função earnings

// imprime informações do HourlyEmployee
void HourlyEmployee::print() const
{
    cout << "hourly employee: ";
    Employee::print(); // reutilização de código
    cout << "\nhourly wage: " << getWage() 
         << "; hours worked: " << getHours();
} // fim da função print