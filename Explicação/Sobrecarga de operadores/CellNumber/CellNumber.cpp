// Exemplo adaptado do livro:
// -> DEITEL, H. M.; DEITEL, P. J. C++: como programar. 
//    5 ed. São Paulo: Pearson Prentice Hall, 2006.

// Operadores de inserção de fluxo e de extração de fluxo sobrecarregados
// para a classe CellNumber.
#include <iomanip>
using std::setw;

#include "CellNumber.h"

// operador de inserção de fluxo sobrecarregado; não pode ser
// uma função-membro se quiséssemos invocá-lo com
// cout << someCellNumber;
ostream &operator<<( ostream &output, const CellNumber &number )
{
    output << "(" << number.areaCode << ") "
           << number.exchange << "-" << number.line;
    return output; // permite cout << a << b << c;
} // fim da função operator<<

// operador de extração de fluxo sobrecarregado; não pode ser
// uma função-membro se quiséssemos invocá-lo com
// cin >> someCellNumber;
istream &operator>>( istream &input, CellNumber &number )
{
    input.ignore(); // pula (
    input >> setw( 2 ) >> number.areaCode; // entrada do código de área
    input.ignore( 2 ); // pula ) e espaço
    input >> setw( 5 ) >> number.exchange; // entrada do prefixo (exchange)
    input.ignore(); // pula traço (-)
    input >> setw( 4 ) >> number.line; // entrada de linha
    
    return input; // permite cin >> a >> b >> c;
} // fim da função operator>>