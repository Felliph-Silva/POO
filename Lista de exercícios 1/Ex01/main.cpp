#include <iostream>
#include "ponto.hpp"

using namespace std;

int main()
{

ponto ponto1; //Objetos.
ponto ponto2;


ponto1.setposition(4, 7);//Alterando as posições.
ponto2.setposition(-2, 9);

cout << "A distância do ponto1 até o ponto 2 é: " << ponto1.distanceobjt(ponto2) << endl;//Distância do ponto1 até o ponto2.

ponto1.print();//Imprimir status
ponto2.print();

    return 0;
}