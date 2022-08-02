// Figura 12.12: CommissionEmployee.h
// Definição da classe CommissionEmployee com dados protected.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // classe string padrão C++
using std::string;

class CommissionEmployee
{
    public:
        CommissionEmployee( const string &, const string &, const string &,
            double = 0.0, double = 0.0 );

        void setFirstName( const string & ); // configura o nome
        string getFirstName() const; // retorna o nome

        void setLastName( const string & ); // configura o sobrenome
        string getLastName() const; // retorna o sobrenome

        void setSocialSecurityNumber( const string & ); // configura SSN
        string getSocialSecurityNumber() const; // retorna SSN

        void setGrossSales( double ); // configura a quantidade de vendas brutas
        double getGrossSales() const; // retorna a quantidade de vendas brutas

        void setCommissionRate( double ); // configura a taxa de comissão
        double getCommissionRate() const; // retorna a taxa de comissão

        double earnings() const; // calcula os rendimentos
        void print() const; // imprime o objeto CommissionEmployee
    
    protected:
        string firstName;
        string lastName;
        string socialSecurityNumber;
        double grossSales;      // vendas brutas semanais
        double commissionRate;  // porcentagem da comissão
}; // fim da classe CommissionEmployee

#endif