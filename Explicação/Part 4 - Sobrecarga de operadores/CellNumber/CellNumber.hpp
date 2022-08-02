// Exemplo adaptado do livro:
// -> DEITEL, H. M.; DEITEL, P. J. C++: como programar. 
//    5 ed. São Paulo: Pearson Prentice Hall, 2006.

// definição da classe CellNumber
#ifndef _CELLNUMBER_H_
#define _CELLNUMBER_H_

#include <iostream>
using std::ostream;
using std::istream;

#include <string>
using std::string;

class CellNumber
{
        friend ostream &operator<<( ostream &, const CellNumber & );
        friend istream &operator>>( istream &, CellNumber & );
    private:
        string areaCode;  // código de área (de cidade) de 2 algarismos
        string exchange;  // prefixo 
        string line;      // sufixo
}; // fim da classe PhoneNumber

#endif