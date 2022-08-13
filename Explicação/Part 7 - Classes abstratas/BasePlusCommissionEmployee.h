
// Classe BasePlusCommissionEmployee derivada de Employee.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "CommissionEmployee.h" // definição da classe CommissionEmployee

class BasePlusCommissionEmployee : public CommissionEmployee
{
    public:
        BasePlusCommissionEmployee( const string &, const string &,
                    const string &, double = 0.0, double = 0.0, double = 0.0 );

        void setBaseSalary( double ); // configura o salário-base
        double getBaseSalary() const; // retorna o salário-base

        // a palavra-chave virtual assinala intenção de sobrescrever
        virtual double earnings() const; // calcula os rendimentos
        virtual void print() const;      // imprime o objeto BasePlusCommissionEmployee
    private:
        double baseSalary; // salário-base por semana
}; // fim da classe BasePlusCommissionEmployee

#endif // BASEPLUS_H