#include <iostream>
#include "relogio.hpp"

using namespace std;

int main()
{
    int h = 23, m = 56, s = 59;

    relogio h1(h, m, s);

    for (int i = 0; i < 10; i++)
    {
    
    h1.incrementarhorario();

    h1.imptimirstatus();

    }
    
    return 0;
}