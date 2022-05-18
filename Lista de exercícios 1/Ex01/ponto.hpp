#ifndef _ponto_
#define _ponto_

#include <iostream>
#include <string>
#include <math.h>

class ponto
{
public:

    int getposition_x();
    int getposition_y();
    int distance();

    void setposition_x();
    void setposition_y();
    void quadrante();
    void print();

private:

    int position[2];
    float distance;
};

#endif