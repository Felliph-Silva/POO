// Figura 13.6: fig13_06.cpp
// Apontando um ponteiro de classe derivada para um objeto de classe básica.
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
    CommissionEmployee commissionEmployee(
        "Sue", "Jones", "222-22-2222", 10000, .06 );
    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = 0;

    // aponta o ponteiro de classe derivada para objeto de classe básica
    // Erro: um CommissionEmployee não é um BasePlusCommissionEmployee
    basePlusCommissionEmployeePtr = &commissionEmployee;
    
    return 0;
} // fim de main