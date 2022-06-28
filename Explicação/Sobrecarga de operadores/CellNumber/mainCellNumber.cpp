// Exemplo adaptado do livro:
// -> DEITEL, H. M.; DEITEL, P. J. C++: como programar. 
//    5 ed. São Paulo: Pearson Prentice Hall, 2006.

// Demonstrando os operadores de inserção
// e extração de fluxo sobrecarregados da classe PhoneNumber.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "CellNumber.hpp"

int main()
{
    CellNumber phone; // cria objeto phone

    cout << "Digite numero do celular na forma (99) 99999-9999:" << endl;

    // cin >> phone invoca operator>> emitindo implicitamente
    // a chamada da função global operator>>( cin, phone )
    cin >> phone;

    cout << "O numero informado foi: ";

    // cout << phone invoca operator<< emitindo implicitamente
    // chamada da função global operator<<( cout, telefone )
    cout << phone << endl;
    
    return 0;
} // fim de main