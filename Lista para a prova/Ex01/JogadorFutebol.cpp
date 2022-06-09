#include "JogadorFutebol.hpp"

using namespace std;

JogadorFutebol::JogadorFutebol() //Construtor padrão.
{
    nome = " ";
    altura = 170;
    peso = 70;
    idade = 18;
    posição = -1;
}
//Métodos set.
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
        idade = age;
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

    case 3:
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
    setpeso(weight);
    setnome(name);   
}

//Métodos get.
int JogadorFutebol::getaltura()
{
    return altura;
}

int JogadorFutebol::getidade()
{
    return idade;
}

int JogadorFutebol::getposição()
{
    return posição;
}

float JogadorFutebol::getpeso()
{
    return peso;
}

string JogadorFutebol::getnome()
{
    return nome;
}

float JogadorFutebol::IMC()
{
    float h = (float) getaltura() / 100;
    return peso / pow(h, 2);
}

void JogadorFutebol::situation_IMC()
{
    if (IMC() < 17)         cout << "\nMuito abaixo do peso.";

    else if (IMC() < 18.5)  cout << "\nAbaixo do peso.";

    else if (IMC() < 25)    cout << "\nPeso normal.";

    else if (IMC() < 30)    cout << "\nAcima do peso.";

    else if (IMC() < 35)    cout << "\nObesidade I.";

    else if (IMC() < 40)    cout << "\nObesidade II (severa).";

    else                    cout << "\nObesidade III (mórbida).";
}

void JogadorFutebol::imprimir()
{
    cout << "\nNome: "                                  << getnome()
         << "\nAltura: "                                << getaltura()
         << "\nIdade: "                                 << getidade()
         << "\nPosição: "                               << getposição()
         << "\nPeso: "                                  << getpeso()
         << fixed << setprecision(1) << "\nIMC: "       << IMC();

    situation_IMC();
}