#include <iostream>
#include "ponto.hpp" //Incluir a classe.

using namespace std;

int main()
{
int i=0, j=0, k=0, n=73; //Variáveis de contagem para incrementar.

ponto ponto[100]; //Vetor de objetos para criar vários pontos

do //Estrutura de repetição para criar vários pontos.
{

cout << "\nDigite uma das opções abaixo: \n\n"
     << "0 para encerrar \n"
     << "1 para criar um ponto e escolher sua posição, máximo de 100 pontos \n"
     << "2 para exibir o status de um ponto \n"
     << "3 para medir a distância de um dos pontos até a origem \n"
     << "4 para medir a distância de um ponto à outro \n";
cin >> n;

int x = 0, y = 0; //Variáveis para as cooredenadas.

switch (n) //Menu de ações
{

case 1:
    i++; //Incrementar uma posição no vetor de objetos.

    cout <<"\nDigite as coordenada x e y, respectivamente, do ponto: \n";
    cin >> x >> y;

    ponto[i].setposition(x, y); //Definir a posição do ponto

    cout <<"Você criou o ponto número " << i << endl;

    break;

case 2:

    cout << "Qual o número do ponto que você deseja ver o status?\n"; //Selecionar uma posição do vetor de objetos.
    cin >> j; 

    if (j > i) //Condição para não acessar uma posição sem coordenadas do vetor de objetos.
    {
        cerr << "Número inválido\n";
        break;
    }
    
    ponto[j].print(); //Imprimir status.

    break;

case 3:

    cout << "Qual o número do ponto que você deseja ver a distância?\n"; //Selecionar uma posição do vetor de objetos.
    cin >> j;

    if (j > i) //Condição para não acessar uma posição sem coordenadas do vetor de objetos.
    {
        cerr << "Número inválido\n";
        break;
    }

    cout << "Distância: "<< ponto[j].distance() << endl; //Distância do ponto até a origem.

    break;

case 4:
    cout << "Você deseja saber a distância entre quais pontos?\n"; //Selecionar duas posições do vetor de objetos.
    cin >> j;
    cin >> k;

    if (j > i || k > i) //Condição para não acessar uma posição sem coordenadas do vetor de objetos.
    {
        cerr << "Número inválido\n";
        break;
    }

    cout << "A distância entre esse pontos é: " << ponto[j].distanceobjt(ponto[k]) << endl; //Distância entre os pontos selecionados.

break;

default:
    break;
}

} while (n != 0); //Condição de parada de repetição

    return 0;
}