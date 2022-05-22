#ifndef _relogio_
#define _relogio_

#include <iostream>
#include <cmath>

using namespace std;

class relogio
{
private:
    int sec, min, hour; //Horas, mínutos e segundos
    
    void setsegundos(int );// Definir atributos.
    void setminutos(int );
    void sethoras(int );

public:

    relogio (int hh, int mm, int ss); //Constutor

    int getsegundos(); //Retornar os atributos.
    int getminutos(); 
    int gethoras(); 

    void incrementarsegundos(); //Métodos de incremento.
    void incrementarminutos();
    void incrementarhoras();
    void incrementarhorario();

    void imptimirstatus(); //Método para imprimir o horário.

};

#endif