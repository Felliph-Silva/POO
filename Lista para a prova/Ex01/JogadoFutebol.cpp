#include "JogadorFutebol.hpp"

using namespace std;

JogadorFutebol::JogadorFutebol() //Construtor básico
{
    nome = " ";
    altura = 170;
    peso = 70;
    idade = 18;
    posição = -1;
}

void JogadorFutebol::setaltura(int h)
{
    if (h > 0)
    {
       altura = h;
    }
    else cerr << "\nAltura inválida.";
}

void JogadorFutebol::setnome(string n)
{
    nome = n;
}

void JogadorFutebol::setidade(int age)
{
    if (age > 0)
    {
        dade = age;
    }
    else cout << "\nIdade inválida.";
}

void JogadorFutebol::setpeso(float p)
{
    if (p > 0)
    {
        peso = p;
    }
    else cout << "Peso inválido.";
}

void JogadorFutebol::setposição(int posi)
{
    switch (posi)
    {
    case 0:
        posição = 0;
        break;
    case 1:
        posição = 1;
        break;
    
    case 2:
        posição = 2;
        break;

    case 3
        posição = 3;
        break;

    default:
        posição = -1;
        break;
    }
}

JogadorFutebol::JogadorFutebol(int h, int age, int position, float weight, string name) //Construtor com parâmetros
{
    setaltura(h);
    setidade(age);
    setposição(position);
    
}