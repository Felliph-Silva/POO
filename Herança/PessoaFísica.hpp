#ifndef _PESSOAFISICA.HPP_
#define _PESSOAFISICA.HPP_

#include "Person.hpp"

class PessoaFísica : public Person
{
private:
    
    string cpf;
    string razão_social;
    string nome_fantasia;

public:
    //métodos get
    string getcpf() const { return cpf; }
    string getrazão_social() const { return razão_social; }
    

    void setcpf(const string &cpf);
};

#endif