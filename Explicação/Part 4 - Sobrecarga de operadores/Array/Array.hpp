// Exemplo extraído do livro:
// -> DEITEL, H. M.; DEITEL, P. J. C++: como programar. 
//    5 ed. São Paulo: Pearson Prentice Hall, 2006.
 
// Classe Array para armazenar arrays de inteiros.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::ostream;
using std::istream;

class Array
{
    friend ostream &operator<<( ostream &, const Array & );
    friend istream &operator>>( istream &, Array & );

    public:
        Array( int = 10 ); // construtor-padrão
        Array( const Array & ); // construtor de cópia
        ~Array(); // destrutor
        
        int getSize() const; // retorna tamanho

        const Array &operator=( const Array & ); // operador de atribuição
        bool operator==( const Array & ) const; // operador de igualdade

        // operador de desigualdade; retorna o oposto do operador ==
        bool operator!=( const Array &right ) const
        {
            return ! ( *this == right ); // invoca Array::operator==
        } // fim da função operator!=

        // operador subscrito de objetos não-const retorna lvalue modificável
        int &operator[]( int );

        // operador de subscrito de objetos const retorna rvalue
        int operator[]( int ) const;

    private:
        int size; // tamanho do array baseado em ponteiro
        int *ptr; // ponteiro para o primeiro elemento do array baseado em ponteiro
}; // fim da classe Array

#endif