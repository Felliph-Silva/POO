#include "Funcionario.hpp"

double Funcionario::calcula_salario_bruto()
{
    return (salario_base * horas_trabalhadas) / (carga_horaria_mensal + calcula_bonus());
}

void Funcionario::setmatricula (string matricula)
{
    if(matricula.size() != 12)
    {
        cerr << "\nNúmero de matrícula inválido";
        exit(EXIT_FAILURE);
    }

    this->matricula = matricula;
}

void Funcionario::setsalario_base (double salario_base)
{


}

void Funcionario::setcarga_horaria_mensal (double carga_horaria_mensal)
{

}

void Funcionario::sethoras_trabalhadas (double horas_trabalhadas)
{

}