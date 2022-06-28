// Exemplo extraído do livro:
// -> DEITEL, H. M.; DEITEL, P. J. C++: como programar. 
//    5 ed. São Paulo: Pearson Prentice Hall, 2006.

// Programa de teste da classe Array.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Array.hpp"

int main()
{
    Array integers1( 7 ); // Array de sete elementos
    Array integers2;      // Array de 10 elementos por padrão

    // imprime o tamanho e o conteúdo de integers1
    cout << "Tamanho do vetor integers1 eh "
         << integers1.getSize()
         << "\nVetor apos a inicializacao:\n" << integers1;

    // imprime o tamanho e o conteúdo de integers2
    cout << "\nTamanho do vetor integers2 eh "
         << integers2.getSize()
         << "\nVetor apos a inicializacao:\n" << integers2;

    // insere e imprime integers1 e integers2
    cout << "\nDigite 17 inteiros:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nApós a entrada de valores, os vetores contêm:\n"
         << "integers1:\n" << integers1
         << "integers2:\n" << integers2;

    // utiliza o operador de desigualdade (!=) sobrecarregado
    cout << "\nAvaliacao: integers1 != integers2" << endl;

    if ( integers1 != integers2 )
        cout << "integers1 e integers2 nao sao iguais" << endl;

    // cria Array integers3 utilizando integers1 como um
    // inicializador; imprime tamanho e conteúdo
    Array integers3( integers1 ); // invoca o construtor de cópia

    cout << "\nTamanho do vetor integers3 eh "
         << integers3.getSize()
         << "\nVetor apos a inicializacao:\n" << integers3;

    // utiliza operador atribuição (=) sobrecarregado
    cout << "\nAtribuindo integers2 para integers1:" << endl;
    integers1 = integers2; // note que o Array alvo é menor

    cout << "integers1:\n" << integers1
         << "integers2:\n" << integers2;

    // utiliza operador de igualdade (==) sobrecarregado
    cout << "\nAvaliacao: integers1 == integers2" << endl;

    if ( integers1 == integers2 )
        cout << "integers1 e integers2 sao iguais" << endl;

    // utiliza operador de subscrito sobrecarregado para criar rvalue
    cout << "\nintegers1[5] eh " << integers1[ 5 ];

    // utiliza operador de subscrito sobrecarregado para criar lvalue
    cout << "\n\nAtribuindo o valor 1000 para integers1[5]" << endl;
    integers1[ 5 ] = 1000;
    cout << "integers1:\n" << integers1;

    // tentativa de utilizar subscrito fora do intervalo
    cout << "\nTentativa de atribuir o valor 1000 para integers1[15]" << endl;
    integers1[ 15 ] = 1000; // ERRO: fora do intervalo
    
    return 0;
} // fim de main