// Definição da classe Moeda

#ifndef _MOEDA_H_
#define _MOEDA_H_

// Definicao da classe moeda
class Moeda
{
    public:
        static float dolar;     // atributo estatico publico - valor do dolar
        
        Moeda();                // construtor
        Moeda(float r);         // construtor: recebe valor em real

        float toDolar();        // converte valor de atributo para dolar

    private:
        float real;             // atributo privado: valor em real

};

#endif