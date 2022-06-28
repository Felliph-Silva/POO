// Exemplo extraído do livro:
// -> DEITEL, H. M.; DEITEL, P. J. C++: como programar. 
//    5 ed. São Paulo: Pearson Prentice Hall, 2006.


// Definições de função-membro para a classe Array
#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib> // sai do protótipo de função
using std::exit;

#include "Array.hpp" // definição da classe Array

// construtor-padrão para a classe Array (tamanho padrão 10)
Array::Array( int arraySize )
{
    size = ( arraySize > 0 ? arraySize : 10 ); // valida arraySize
    ptr = new int[ size ]; // cria espaço para array baseado em ponteiro

    for ( int i = 0; i < size; i++ )
        ptr[ i ] = 0; // configura elemento do array baseado em ponteiro
} // fim do construtor-padrão de Array

    // copia o construtor da classe Array;
    // deve receber uma referência para impedir a recursão infinita
Array::Array( const Array &arrayToCopy )
      : size( arrayToCopy.size )
{
    ptr = new int[ size ]; // cria espaço para array baseado em ponteiro

    for ( int i = 0; i < size; i++ )
        ptr[ i ] = arrayToCopy.ptr[ i ]; // copia para o objeto
} // fim do construtor de cópia do Array

// destrutor para a classe Array
Array::~Array()
{
    delete [] ptr; // libera espaço do array baseado em ponteiro
} // fim do destrutor

// retorna o número de elementos do Array
int Array::getSize() const
{
    return size; // número de elementos em Array
} // fim da função getSize

// operador de atribuição sobrecarregado;
// retorno const evita: (a1 = a2) = a3
const Array &Array::operator=( const Array &right )
{
    if ( &right != this ) // evita auto-atribuição:
    {
        // para Arrays de tamanhos diferentes, desaloca array do lado esquerdo
        // original, então aloca o novo array à esquerda
        if ( size != right.size )
        {
            delete [] ptr; // libera espaço
            size = right.size; // redimensiona esse objeto
            ptr = new int[ size ]; // cria espaço para a cópia do array
        } // fim do if interno

        for ( int i = 0; i < size; i++ )
            ptr[ i ] = right.ptr[ i ]; // copia o array para o objeto
    } // fim do if externo

    return *this; // permite x = y = z, por exemplo
} // fim da função operator=

// determina se dois Arrays são iguais e
// retorna true, caso contrário retorna false
bool Array::operator==( const Array &right ) const
{
    if ( size != right.size )
        return false; // arrays com diferentes números de elementos

    for ( int i = 0; i < size; i++ )
        if ( ptr[ i ] != right.ptr[ i ] )
            return false; // o conteúdo do Array não é igual

    return true; // Arrays são iguais
} // fim da função operator==

// operador de subscrito sobrecarregado para Arrays não-const;
// retorno de referência cria um lvalue modificável
int &Array::operator[]( int subscript )
{
    // verifica erro de subscrito fora do intervalo
    if ( subscript < 0 || subscript >= size )
    {
        cerr << "\nError: indice " << subscript
             << " fora do intervalo" << endl;
        exit( 1 ); // termina o programa; subscrito fora do intervalo
    } // fim do if

    return ptr[ subscript ]; // retorno da referência
} // fim da função operator[]

// operador de subscrito sobrecarregado para Arrays const
// retorno de referência const cria um rvalue
int Array::operator[]( int subscript ) const
{
    // verifica erro de subscrito fora do intervalo
    if ( subscript < 0 || subscript >= size )
    {
        cerr << "\nError: indice " << subscript
             << " fora do intervalo" << endl;
        exit( 1 ); // termina o programa; subscrito fora do intervalo
    } // fim do if

    return ptr[ subscript ]; // retorna cópia desse elemento
} // fim da função operator[]

// operador de entrada sobrecarregado para a classe Array;
// entrada de valores para o Array inteiro
istream &operator>>( istream &input, Array &a )
{
    for ( int i = 0; i < a.size; i++ )
        input >> a.ptr[ i ];

    return input; // permite cin >> x >> y;
} // fim da função

// operador de saída sobrecarregado para classe Array
ostream &operator<<( ostream &output, const Array &a )
{
    int i;

    // gera saída do array baseado em ptr private
    for ( i = 0; i < a.size; i++ )
    {
        output << setw( 12 ) << a.ptr[ i ];

        if ( ( i + 1 ) % 4 == 0 ) // 4 números por linha de saída
            output << endl;
    } // fim do for

    if ( i % 4 != 0 ) // termina a última linha de saída
        output << endl;

    return output; // permite cout << x << y;
} // fim da função operator<<