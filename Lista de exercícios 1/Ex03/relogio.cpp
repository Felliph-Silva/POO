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

void relogio::incrementarhorario() //ALTERAR O HORÁRIO USANDO IF(IF(IF));*
{
    if (++sec == 60) //Incrementa os segundos, se for igual a 60 o horário "vira".
    {
        sec = 0; //Os segundos zeram.

        if (++min == 60) //Incrementa os minutos, se for igual a 60 o horário "vira".
        {
            min = 0; //Os minutos são zerados

            if (++hour == 24) //Incrementa as horas, se for igual a 24 o horário "vira".
            {
                hour = 0; //As horas são zeradas.
            }
            
        }
        
    }
}

void relogio::imprimirstatus() //Imprimir o horário.
{
    cout << endl;

    if (hour < 10)
    {
        cout << "0";
    }

    cout << hour << " :";

    if (min < 10)
    {
        cout << "0";
    }

    cout << min << " :"; 
    
    if (sec < 0)
    {
        cout << "0";
    }
    
    cout << sec << endl;
}