// Figura 12.10: BasePlusCommissionEmployee.h
// Classe BasePlusCommissionEmployee derivada da classe
// CommissionEmployee.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // classe string padrão C++
using std::string;

#include "CommissionEmployee.h" // declaração da classe CommissionEmployee

class BasePlusCommissionEmployee : public CommissionEmployee
{
    public:
        BasePlusCommissionEmployee( const string &, const string &,
            const string &, double = 0.0, double = 0.0, double = 0.0 );

        void setBaseSalary( double ); // configura o salário-base
        double getBaseSalary() const; // retorna o salário-base

        double earnings() const; // calcula os rendimentos
        void print() const;      // imprime o objeto BasePlusCommissionEmployee
    private:
        double baseSalary;       // salário-base
}; // fim da classe BasePlusCommissionEmployee

#endif