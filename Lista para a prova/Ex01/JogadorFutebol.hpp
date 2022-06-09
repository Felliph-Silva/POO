#ifndef _jogador_
#define _jogador_

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

class JogadorFutebol
{
private:

    int altura, idade, posição;
    float peso;
    string nome;

    void situation_IMC(); //Método auxiliar para imprimir o estado do IMC.

public:

    JogadorFutebol(); //Construtor sem parâmetros.
    JogadorFutebol(int , int , int , float , string); //Construtor com parâmetro.

    //Métodos set.
    void setaltura(int );
    void setidade(int );
    void setposição(int );
    void setpeso(float );
    void setnome(string );

    //métodos get.
    int getaltura();
    int getidade();
    int getposição();
    float getpeso();
    string getnome();

    float IMC(); 
    void imprimir();
};

#endif