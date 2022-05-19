#include "ponto.hpp" //Incluir a classe.
using namespace std;

int ponto::getposition_x()//Retornar a posição em x do objeto.
{
    return position_x;
}

int ponto::getposition_y()//Retornar a posição em y do objeto.
{
    return position_y;
}

void ponto::setposition(int x, int y)//Mudar a posição (x,y) do objeto.
{
    position_x = x;
    position_y = y;
}

void ponto::quadrante() //Exibir em qual quadrante se encontra o objeto de acordo com as suas posições em x e em y.
{

if (position_x == 0 && position_y == 0)

    cout << "Está na origem.\n";

if (position_x > 0 && position_y > 0)

    cout << "Está no primeiro quadrante.\n";

if (position_x < 0 && position_y > 0)

    cout << "Está no segundo quadrante.\n";

if (position_x < 0 && position_y < 0)

    cout << "Está no terceiro quadrante.\n";

if (position_x > 0 && position_y < 0)

    cout << "Está no quarto quadrante.\n";

if (position_x != 0 && position_y == 0)

    cout << "Está no eixo das abscissas.\n";

if (position_x == 0 && position_y != 0)

    cout << "Está no eixo das ordenadas.\n";
}

float ponto::distance() //Distância do ponto até a origem.
{
    float dist = sqrt (pow(position_x,2) + pow(position_y, 2)); //Fórmula de distância entre pontos no plano cartesiano.

    return dist;
}

float ponto::distanceobjt(ponto ponto) //Distância de um ponto à outro.
{
    float dist = sqrt (pow(position_x - ponto.getposition_x(), 2) + pow(position_y - ponto.getposition_y(), 2)); //Fórmula de distância entre pontos no plano cartesiano.

    return dist;
}

void ponto::print() //Imprimir os status: posição no plano, distância do ponto até a origem e o quadrante em que se encontra.
{
    cout << "A posição do ponto é ( " << position_x << " , " << position_y << " )\n"
         << "A distância desse ponto até a origem é: " << distance() << endl;

     quadrante();
         
}