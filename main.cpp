#include <iostream>
#include "mapa.h"
#include "player.h"
#include "Simulare.h"
using namespace std;

int main()
{
    mapa h;
    player1 p1;
    player2 p2;
    player3 p3;
    player4 p4;
    simulare s;
    s.test_val(p1,p2,p3,p4,h,10);
    return 0;
}
