
// Definições de função-membro da classe básica abstrata Employee.
// Nota: Nenhuma definição recebe funções virtuais puras.
#include <iostream>
using std::cout;

#include "Employee.h" // Definição da classe Employee

// construtor
Employee::Employee( const string &first, const string &last,
                    const string &ssn )
        : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
        // corpo vazio
} // fim do construtor Employee

// configura o nome
void Employee::setFirstName( const string &first )
{
    firstName = first;
} // fim da função setFirstName

// retorna o nome
string Employee::getFirstName() const
{
    return firstName;
} // fim da função getFirstName

// configura o sobrenome
void Employee::setLastName( const string &last )
{
    lastName = last;
} // fim da função setLastName

// retorna o sobrenome
string Employee::getLastName() const
{
    return lastName;
} // fim da função getLastName

// configura o SSN
void Employee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn; // deve validar
} // fim da função setSocialSecurityNumber

// retorna o SSN
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
} // fim da função getSocialSecurityNumber

// imprime informações de Employee (virtual, mas não virtual pura)
void Employee::print() const
{
    cout << getFirstName() << ' ' << getLastName()
         << "\nsocial security number: " << getSocialSecurityNumber();
} // fim da função print