#ifndef SIMULARE_H_INCLUDED
#define SIMULARE_H_INCLUDED
#include "mapa.h"
#include "player.h"
class simulare:public mapa, public player1, public player2, public player3, public player4
{
public:
    void test(player1 p1,player2 p2,player3 p3,player4 p4,mapa h)
    {
        int players=4;
        while(h.getnrcomori()!=0 && players!=0)
        {
            players=0;
            if(p1.getin()==true)
            {
                p1.mutare(h);
                players++;
            }
            if(p2.getin()==true)
            {
                p2.mutare(h);
                players++;
            }
            if(p3.getin()==true)
            {
                p3.mutare(h);
                players++;
            }
            if(p4.getin()==true)
            {
                p4.mutare(h);
                players++;
            }
        }
        h.afisare_harta();
    }
    void test_val(player1 p1,player2 p2,player3 p3,player4 p4,mapa h,int x)
    {
        int players=4,i=0;
        while(h.getnrcomori()!=0 && players!=0 && i<x)
        {
            players=0;
            if(p1.getin()==true)
            {
                p1.mutare(h);
                players++;
            }
            if(p2.getin()==true)
            {
                p2.mutare(h);
                players++;
            }
            if(p3.getin()==true)
            {
                p3.mutare(h);
                players++;
            }
            if(p4.getin()==true)
            {
                p4.mutare(h);
                players++;
            }
            i++;
        }
        h.afisare_harta();
    }
};

#endif // SIMULARE_H_INCLUDED
