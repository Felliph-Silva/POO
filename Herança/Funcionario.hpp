#ifndef _FUNCIONARIO.HPP_
#define _FUNCIONARIO.HPP_

#include "PessoaFísica.hpp"

class Funcionario : public PessoaFísica
{
private:
    
    string matricula;
    double salario_base;
    int carga_horaria_mensal;
    int horas_trabalhadas;
    double calcula_bonus() { return 0.0; }

public:

    double calcula_salario_bruto();

    //Métodos get:
    string getmatricula() { return matricula; }
    double getsalario_base() { return salario_base; }
    double getcarga_horaria_mensal() { return carga_horaria_mensal; }
    double gethoras_trabalhadas() { return horas_trabalhadas; }

    //Métodos set:
    void setmatricula (string matricula);
    void setsalario_base (double salario_base);
    void setcarga_horaria_mensal (double carga_horaria_mensal);
    void sethoras_trabalhadas (double horas_trabalhadas);

};

#endif