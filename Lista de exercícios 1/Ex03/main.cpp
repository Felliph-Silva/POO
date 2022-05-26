#include <iostream>
#include "relogio.hpp"

using namespace std;

int main()
{
    int h = 23, m = 59, s = 55;

    relogio h1(h, m, s);

    for (int i = 0; i < 10; i++)
    {
    
    h1.incrementarhorario();

    h1.imprimirstatus();

    }

    h1.incrementarsegundos();
    h1.incrementarminutos();
    h1.incrementarhoras();

    cout << "\n\n";

    h1.imprimirstatus();
    
    return 0;
}