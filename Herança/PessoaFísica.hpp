#ifndef _PESSOAFISICA.HPP_
#define _PESSOAFISICA.HPP_

#include "Person.hpp"

class PessoaFísica : public Person
{
private:
    
    string cpf;
public:
    //Métodos get;
    string getcpf() const { return cpf; }
    //Métodos set;
    void setcpf(const string &cpf);
};

#endif