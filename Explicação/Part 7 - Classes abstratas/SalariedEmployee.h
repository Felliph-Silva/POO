
// Classe SalariedEmployee derivada de Employee.
#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h" // definição da classe Employee

class SalariedEmployee : public Employee
{
    public:
        SalariedEmployee( const string &, const string &,
                          const string &, double = 0.0 );

        void setWeeklySalary( double ); // configura o salário semanal
        double getWeeklySalary() const; // retorna o salário semanal

        // palavra-chave virtual assinala intenção de sobrescrever
        virtual double earnings() const; // calcula os rendimentos
        virtual void print() const; // imprime objeto SalariedEmployee
    private:
        double weeklySalary; // salário por semana
}; // fim da classe SalariedEmployee

#endif // SALARIED_H