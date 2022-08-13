#ifndef __PESSOAJURIDICA.HPP_
#define __PESSOAJURIDICA.HPP_

#include "Person.hpp"

class PessoaJurídica : public Person
{
private:
    
    string CNPJ;
    string razao_social;
public:
    //Métodos get;
    string getcnpj() const          { return CNPJ; }
    string getrazão_social() const  { return razao_social; }
    //Métodos set;
    void setcnpj          (const string &CNPJ);
    void setrazão_social  (const string &razao_social);
};

#endif