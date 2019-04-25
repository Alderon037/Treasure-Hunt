#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "mapa.h"
class player
{
public:
    virtual void mutare(mapa&)=0;
    virtual bool getin()=0;
};
class player1:public player
{
    int x;
    int y;
    bool in;
public:
    friend class mapa;
    player1();
    bool getin();
    void mutare(mapa&);
};
class player2:public player
{
    int x;
    int y;
    bool in;
public:
    friend class mapa;
    player2();
    bool getin();
    void mutare(mapa&);
};
class player3:public player
{
    int x;
    int y;
    bool in;
    int dirx;
    int diry;
public:
    friend class mapa;
    player3();
    bool getin();
    void mutare(mapa&);
};
class player4:public player
{
    int x;
    int y;
    bool in;
    int dirx;
    int diry;
public:
    friend class mapa;
    player4();
    bool getin();
    void mutare(mapa&);
};
#endif // PLAYER_H_INCLUDED
