// Figura 13.7: fig13_07.cpp
// Tentando invocar as funções-membro exclusivas da classe derivada
// por um ponteiro de classe básica.
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
    CommissionEmployee *commissionEmployeePtr = 0; // classe básica
    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300 ); // classe derivada

    // aponta o ponteiro de classe básica para o objeto de classe derivada
    commissionEmployeePtr = &basePlusCommissionEmployee;

    // invoca as funções-membro de classe básica no objeto de classe derivada
    // por ponteiro de classe básica
    string firstName = commissionEmployeePtr->getFirstName();
    string lastName = commissionEmployeePtr->getLastName();
    string ssn = commissionEmployeePtr->getSocialSecurityNumber();
    double grossSales = commissionEmployeePtr->getGrossSales();
    double commissionRate = commissionEmployeePtr->getCommissionRate();


    //BasePlusCommissionEmployee * emp1 = (BasePlusCommissionEmployee *)commissionEmployeePtr;
/*
    // tentativa de invocar funções exclusivas de classe derivada
    // em objeto de classe derivada por meio de um ponteiro de classe básica
    double baseSalary = commissionEmployeePtr->getBaseSalary();
    commissionEmployeePtr->setBaseSalary( 500 );*/

    ((BasePlusCommissionEmployee *)commissionEmployeePtr)->getBaseSalary();
    
    return 0;
} // fim de main