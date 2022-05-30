#ifndef _relogio_
#define _relogio_

#include <iostream>

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
    ~relogio(); //Destrutor

    int getsegundos(); //Retornar os atributos.
    int getminutos(); 
    int gethoras(); 

    void incrementarsegundos(); //Métodos de incremento.
    void incrementarminutos();
    void incrementarhoras();
    void incrementarhorario();

    void imprimirstatus(); //Método para imprimir o horário.

};

#endif