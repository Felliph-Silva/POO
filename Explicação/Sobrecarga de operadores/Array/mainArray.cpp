#include <iostream>
#include "Array.hpp"

using namespace std;

int main(void)
{
    // instanciação de objetos
    Array vetor1 = Array(5);
    Array vetor2 = Array(5);

    vetor1.imprimir();  // imprime vetor1 (chamada de método)

    vetor1 + 2;         // sobrecarga: vetor1.operator+(2);

    vetor1.imprimir();  // imprime vetor1 após operação

    // obtém cópia do atributo vetor
    int * vet = vetor1.getVetor();

    vet[0] = vet[1] = vet[2] = 10;      // altera valores da cópia 
                                        // do atributo

    vetor1.imprimir();   // imprime vetor1 após operação
                         // após de retorno de cópia
    
    Array * resultado = vetor1 + vetor2;  // sobrecarga de operador (construtor de cópia)
                                        // vetor1.operator+(vetor2)
    
    // operador seta, devido ao ponteiro
    resultado->imprimir();   // imprime resultado após operação

    delete [] vet;          // libera memória alocada para vet

    return EXIT_SUCCESS;
}