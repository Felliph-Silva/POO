#include <iostream>
#include "ponto.hpp"

using namespace std;

int main()
{
int i=0, j=0, k=0, n=73;

ponto ponto[100];

do //Estrutura de repetição para criar vários pontos.
{

cout << "\nDigite uma das opções abaixo: \n\n"
     << "0 para encerrar \n"
     << "1 para criar um ponto e escolher sua posição, máximo de 100 pontos \n"
     << "2 para exibir o status de um ponto \n"
     << "3 para medir a distância de um dos pontos até a origem \n"
     << "4 para medir a distância de um ponto à outro \n";
cin >> n;

int x = 0, y = 0;

switch (n)
{

case 1:
    cout <<"\nDigite as coordenada x e y, respectivamente, do ponto: \n";
    cin >> x >> y;
    //cout <<"\nDigite a coordenada y do ponto: \n";
    //cin >> y;

    ponto[i].setposition(x, y);

    cout <<"Você criou o ponto número " << i << endl;

    i++;
    break;

case 2:

    cout << "Qual o número do ponto que você deseja ver o status?\n";
    cin >> j;

    if (j > i)
    {
        cerr << "Número inválido\n";
        break;
    }
    
    ponto[j].print();

    break;

case 3:

    cout << "Qual o número do ponto que você deseja ver a distância?\n";
    cin >> j;

    if (j > i)
    {
        cerr << "Número inválido\n";
        break;
    }

    cout << "Distância: "<< ponto[j].distance() << endl;

    break;

case 4:
    cout << "Você deseja saber a distância entre quais pontos?\n";
    cin >> j;
    cin >> k;

    if (j > i || k > i)
    {
        cerr << "Número inválido\n";
        break;
    }

    cout << "A distância entre esse pontos é: " << ponto[j].distanceobjt(ponto[k]) << endl;

break;

default:
    break;


}

} while (n != 0);

    return 0;
}