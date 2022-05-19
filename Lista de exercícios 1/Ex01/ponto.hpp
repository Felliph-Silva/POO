#ifndef _ponto_ //Definição da classe.
#define _ponto_

#include <iostream>
#include <cmath>

using namespace std;

class ponto//Classe utilizada.
{
public:
    //ponto() criar constutor
    int getposition_x(); //Métodos para obter a posição.
    int getposition_y();
    float distance(); //Método para obter a distância.
    float distanceobjt(ponto ponto2); //Método para obter a distância do ponto até outro ponto.

    void setposition(int x, int y); //Método para mudar a posição do ponto.
    void quadrante(); //Exibir o quadrante no qual o ponto está localizado.
    void print(); //Exibir os estatus do ponto.

private: //Atributos encapsulados.

    int position_x, position_y; //Posição (x,y).
};

#endif