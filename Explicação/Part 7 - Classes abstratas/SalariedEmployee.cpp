
// Definições de função-membro da classe SalariedEmployee.
#include <iostream>
using std::cout;

#include "SalariedEmployee.h" // definição da classe SalariedEmployee

// construtor
SalariedEmployee::SalariedEmployee( const string &first,
                                    const string &last, const string &ssn, double salary )
        : Employee( first, last, ssn )
{
    setWeeklySalary( salary );
} // fim do construtor SalariedEmployee

// configura o salário
void SalariedEmployee::setWeeklySalary( double salary )
{
    weeklySalary = ( salary < 0.0 ) ? 0.0 : salary;
} // fim da função setWeeklySalary

// retorna o salário
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
} // fim da função getWeeklySalary

// calcula os rendimentos;
// sobrescreve a função virtual pura earnings em Employee
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
} // fim da função earnings

// imprime informações de SalariedEmployee
void SalariedEmployee::print() const
{
    cout << "salaried employee: ";
    Employee::print(); // reutiliza função print da classe básica abstrata
    cout << "\nweekly salary: " << getWeeklySalary();
} // fim da função print