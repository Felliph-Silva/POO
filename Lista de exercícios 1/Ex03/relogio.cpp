#include "relogio.hpp" //Incluir arquivo de cabeçalho

using namespace std;

//Escopo dos métodos

//Métodos get
int relogio::getsegundos()
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
    if (hora >= 0 && hora < 24)
    {
        hour = hora;
    }
    else
    {
        cerr << "\nNúmero inválido.";
    }
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
        hour++;
    }

    else hour = 0;
    
}

void relogio::incrementarminutos() //Incrementar o número de minutos, sem alterar os segundos e horas.
{

    if (min < 60)
    {
        min++;
    }

    else min = 0;

}

void relogio::incrementarsegundos() //Incrementar o número de segundos, sem alterar os minutos e horas
{
    if (sec < 60)
    {
        sec++;
    }

    else sec = 0;
}

int relogio::incrementarhorario() //ALTERAR O HORÁRIO USANDO IF(IF(IF));*
{
    if (sec < 59) //Condição para incrementar os segundos.
    {
        sec++;
        return 0;
    }

    if (sec == 59 && min < 59) //Condição para alterar os minutos.
    {
        min++;
        sec = 0;
        return 0;
    }

    if(min == 59 && hour < 23) //Condição para alterar as horas.
    {
        hour++;
        min = 0;
        return 0;
    }

    else //Condição que zera o relógio.
    {
        sec = 0;
        min = 0;
        hour = 0;
        return 0;
    }
    
}

void relogio::imprimirstatus() //Imprimir o horário.
{
    cout << endl << hour << " :" << min << " :" << sec << endl;
}