
// Classe CommissionEmployee derivada de Employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h" // definição da classe Employee

class CommissionEmployee : public Employee
{
    public:
        CommissionEmployee( const string &, const string &,
                         const string &, double = 0.0, double = 0.0 );

        void setCommissionRate( double ); // configura a taxa de comissão
        double getCommissionRate() const; // retorna a taxa de comissão

        void setGrossSales( double ); // configura a quantidade de vendas brutas
        double getGrossSales() const; // retorna a quantidade de vendas brutas

        // a palavra-chave virtual assinala intenção de sobrescrever
        virtual double earnings() const; // calcula os rendimentos
        virtual void print() const; // imprime o objeto CommissionEmployee
    private:
        double grossSales;     // vendas brutas semanais
        double commissionRate; // porcentagem da comissão
}; // fim da classe CommissionEmployee

#endif // COMMISSION_H