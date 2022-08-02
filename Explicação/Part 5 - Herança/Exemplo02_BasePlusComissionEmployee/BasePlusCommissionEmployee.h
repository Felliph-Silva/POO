// Figura 12.7: BasePlusCommissionEmployee.h
// Definição da classe BasePlusCommissionEmployee representa um empregado
// que recebe um salário-base além da comissão.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // classe string padrão C++
using std::string;

class BasePlusCommissionEmployee
{
    public:
        BasePlusCommissionEmployee( const string &, const string &,
                                    const string &, double = 0.0, double = 0.0, double = 0.0 );

        void setFirstName( const string & ); // configura o nome
        string getFirstName() const; // retorna o nome

        void setLastName( const string & ); // configura o sobrenome
        string getLastName() const; // retorna o sobrenome

        void setSocialSecurityNumber( const string & ); // configura o SSN
        string getSocialSecurityNumber() const; // retorna o SSN

        void setGrossSales( double ); // configura a quantidade de vendas brutas
        double getGrossSales() const; // retorna a quantidade de vendas brutas

        void setCommissionRate( double ); // configura a taxa de comissão
        double getCommissionRate() const; // retorna a taxa de comissão
        
        void setBaseSalary( double ); // configura o salário-base
        double getBaseSalary() const; // retorna o salário-base

        double earnings() const; // calcula os rendimentos
        void print() const; // imprime o objeto BasePlusCommissionEmployee
    
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;
        double grossSales;     // vendas brutas semanais
        double commissionRate; // porcentagem da comissão
        double baseSalary;     // salário-base
    }; // fim da classe BasePlusCommissionEmployee

#endif