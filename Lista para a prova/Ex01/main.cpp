#include "JogadorFutebol.hpp"

int main()
{
    JogadorFutebol jogador1;

    JogadorFutebol jogador2(170, 23, 2, 90.8, "Robson");

    jogador1.imprimir();

    cout << "\n\n";

    jogador2.imprimir();

    return 0;
}