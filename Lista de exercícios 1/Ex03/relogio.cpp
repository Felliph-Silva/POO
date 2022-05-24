#include "relogio.hpp" //Incluir arquivo de cabeçalho

using namespace std;

//Escopo dos métodos

int relogio::getsegundos() //Métodos get
{
    return sec;
}

int relogio::getminutos()
{
    return min;
}

int relogio::gethoras()
{
    return hour;
}

relogio::relogio(int hh, int mm, int ss) //Constutor
{
    sethoras(hh);
    setminutos(mm);
    setsegundos(ss);
}

void relogio::incrementarhoras() //Incremetar o número de horas, sem alterar os segundo e minutos.
{
    
    if (hour < 24)
    {
        cerr << "\nLimite de horas atingido.";
    }

    else hour++;
    
}

void relogio::incrementarminutos() //Incrementar o número de minutos, sem alterar os segundos e horas.
{

    if (min < 60)
    {
        cerr << "\nLimite de minutos atingido";
    }

    else min++;

}

void relogio::incrementarsegundos() //Incrementar o número de segundos, sem alterar os minutos e horas
{
    if (sec < 60)
    {
        cerr << "\nLimite de segundos atingido";
    }

    else sec++;
}

int relogio::incrementarhorario()
{
    if (sec < 60) //Condição para incrementar os segundos.
    {
        sec++;
        return 0;
    }

    else if (sec == 60 && min < 60)
    {
        min++;
        sec = 0;
        return 0;
    }

    else if(min == 60 && hour < 24)
    {
        hour++;
        min = 0;
        return 0;
    }

    else
    {
        sec = 0;
        min = 0;
        hour = 0;
        return 0;
    }
    
}

void relogio::imptimirstatus() //Imprimir o horário.
{
    cout << endl << hour << " :" << min << " :" << " :" << sec << endl;
}

//Métodos set com restrição de valores.
void relogio::setsegundos(int segundo)
{
    if (segundo >= 0 && segundo < 60)
    {
        sec = segundo;
    }
    else
    {
        cerr << "\nNúmero inválido.";
    }
}

void relogio::setminutos(int minuto)
{
    if (minuto >= 0 && minuto < 60)
    {
        min = minuto;
    }
    else
    {
        cerr << "\nNúmero inválido.";
    }
}

void relogio::sethoras(int hora)
{
    if (hora >= 0 && hora < 60)
    {
        hour = hora;
    }
    else
    {
        cerr << "\nNúmero inválido.";
    }
}
