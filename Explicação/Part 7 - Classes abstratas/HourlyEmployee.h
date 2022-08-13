
// Definição da classe HourlyEmployee.
#ifndef HOURLY_H
#define HOURLY_H

#include "Employee.h" // definição da classe Employee

class HourlyEmployee : public Employee
{
    public:
        HourlyEmployee( const string &, const string &,
                        const string &, double = 0.0, double = 0.0 );

        void setWage( double ); // configura o salário por hora
        double getWage() const; // retorna o salário por hora

        void setHours( double ); // configura as horas trabalhadas
        double getHours() const; // retorna as horas trabalhadas

        // a palavra-chave virtual assinala intenção de sobrescrever
        virtual double earnings() const; // calcula os rendimentos
        virtual void print() const; // imprime o objeto HourlyEmployee
    private:
        double wage;  // salário por hora
        double hours; // horas trabalhadas durante a semana
}; // fim da classe HourlyEmployee

#endif // HOURLY_H