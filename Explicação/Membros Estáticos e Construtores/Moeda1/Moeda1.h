// Definição da classe Moeda

#ifndef _MOEDA_H_
#define _MOEDA_H_

// Definicao da classe moeda
class Moeda1
{
    public:

        Moeda1();                // construtor
        Moeda1(float r);         // construtor: recebe valor em real

        float toDolar();         // converte valor de atributo para dolar

        static void valorDolar();    // solicita a entrada do valor atual do dolar

    private:
        float real;             // atributo privado: valor em real

        static float dolar;     // atributo estatico publico - valor do dolar
};

#endif