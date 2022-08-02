// Arquivo de definição da classe Array
#ifndef _ARRAY_CPP_
#define _ARRAY_CPP_

#include <iostream>
using std::cout;
using std::cerr;

// número de elementos padrão para a classe
#define N_ELEMENTOS_PADRAO 10

class Array
{
    public:
        Array();                // construtor sem parâmetros (default)
        Array(int n_elem);      // construtor com parâmetro

        int getNElementos() const;    // retorna o número de elementos
        int * getVetor() const;       // retorna um vetor com os elementos do Array
                                // método com objetivo didático
                                // deve-se ter cuidado com atributos ponteiro

        void setPosicao(int i, int valor);  // atribui valor para uma determinada
                                            // posicao do objeto Array

        int getPosicao(int i) const;  // retorna valor da posição i                                    

        void imprimir() const;        // imprime em tela os elementos do objeto Array

        void operator+(int num);                      // método de sobrecarga - Exemplo: array + 2
        Array * operator+(const Array & array) const;   // método de sobrecarga - Exemplo: arrayA + arrayB   

        ~Array();               // destrutor da classe

    private:
        int * vetor;        // atributo vetor (elementos do objeto)
        int n_elementos;    // número de elementos armazenados

        void preencheVetor();   // método auxiliar para preenchimento
                                // do atributo vetor
};

#endif