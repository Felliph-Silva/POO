#include "esfera.hpp" //Incluir arquivo de cabeçalho

using namespace std;

void esfera::setraio(float r) //Método set para definir o atributo raio.
{
    raio = r;
}

esfera::esfera(float r) //Construtor.
{
    setraio(r);
}

void esfera::status() //Imprimir estado da esfera.
{
    cout << endl << raio << endl << area() << endl << volume() << endl;
}

float esfera::getraio() //Retornar o valor do atributo raio.
{
    return raio;
}

float esfera::area() //Método que calcula e retorna a área.
{
    float area = 4 * M_PI * (pow (raio, 2));

    return area;
}

float esfera::volume() //Método que calcula e retorna o volume.
{
    float volume = (4 * M_PI * pow(raio, 3)) / 3;

    return volume;
}

float esfera::preenchimento(float altura) //Método que cálcula o prechimento de acordo com a altura informada.
{
    if (altura > 0 && altura <= 2*raio) //Limitar a altura recebida (Máximo = Diâmetro)
    {
        float prechmnt = ((M_PI * altura) * (3 * pow(M_PI,2) + pow(altura,2))) / 6; //Fórmula do segmento esférico de uma base.
        return prechmnt;
    }

    else
    {
        cerr << "Altura inválida\n"; //Retorna -1 em caso de altura inválida.
        return -1;
    }
}