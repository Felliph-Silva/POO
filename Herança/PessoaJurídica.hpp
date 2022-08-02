#ifndef __PESSOAJURIDICA.HPP_
#define __PESSOAJURIDICA.HPP_

#include "Person.hpp"

class PessoaJurídica : public Person
{
private:
    
    string CNPJ;
public:

    string getcnpj() const { return CNPJ; }
    void setcnpj(const string &CNPJ) { this->CNPJ = CNPJ; }
};

#endif