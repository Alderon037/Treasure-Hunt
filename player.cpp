#include "player.h"
player1::player1()
{
    x=0;
    y=0;
    in=true;
}
bool player1::getin()
{
    return in;
}
void player1::mutare(mapa&h)
{
    bool ok=false;
    int li=-1,di=1,lj=-1,dj=1;
    if(x==0)
        li=0;
    if(x==h.dimensiune-1)
        di=0;
    if(y==0)
        lj=0;
    if(y==h.dimensiune-1)
        dj=0;
    for(int i=li;i<=di && ok==false;i++)
        for(int j=lj;j<=dj && ok==false;j++)
            if(h.harta[x+i][y+j]==9)
                {in=false;
                h.nrcomori--;
                x=x+i;
                y=y+j;
                h.harta[x][y]=1;
                ok=true;}
            else
                if(h.harta[x+i][y+j]==0)
                    {x=x+i;
                    y=y+j;
                    h.harta[x][y]=1;
                    ok=true;}
    if(ok==false)
        in=false;
}
player2::player2()
{
    x=0;
    y=14;
    in=true;
}
bool player2::getin()
{
    return in;
}
void player2::mutare(mapa&h)
{
    bool ok=false;
    int li=-1,di=1,lj=-1,dj=1;
     if(x==0)
        li=0;
    if(x==h.dimensiune-1)
        di=0;
    if(y==0)
        lj=0;
    if(y==h.dimensiune-1)
        dj=0;
    for(int j=dj;j>=lj && ok==false;j--)
        for(int i=di;i>=li && ok==false;i--)
            if(h.harta[x+i][y+j]==9)
                {in=false;
                h.nrcomori--;
                x=x+i;
                y=y+j;
                h.harta[x][y]=2;
                ok=true;}
            else
                if(h.harta[x+i][y+j]==0)
                    {x=x+i;
                    y=y+j;
                    h.harta[x][y]=2;
                    ok=true;}
    if(ok==false)
        in=false;
}

player3::player3()
{
    x=14;
    y=0;
    in=true;
}
bool player3::getin()
{
    return in;
}
void player3::mutare(mapa&h)
{
    bool ok=false;
    int li=-1,di=1,lj=-1,dj=1;
    if(x==0)
        {dirx=1;
        li=0;}
    if(x==h.dimensiune-1)
        {dirx=-1;
        di=0;}
    if(y==0)
        {diry=1;
        lj=0;}
    if(y==h.dimensiune-1)
        {diry=-1;
        dj=0;}
    for(int i=li;i<=di && ok==false;i++)
        for(int j=lj;j<=dj && ok==false;j++)
            if(h.harta[x+i][y+j]==9)
            {in=false;
            h.nrcomori--;
            x=x+i;
            y=y+j;
            h.harta[x][y]=3;
            ok=true;}
    if(h.harta[x+dirx][y+diry]==0 && ok==false)
    {
        x=x+dirx;
        y=y+diry;
        h.harta[x][y]=3;
        ok=true;
    }
    else
        if(ok==false)
            for(int i=li;i<=di && ok==false;i++)
                for(int j=lj;j<=dj && ok==false;j++)
                    if(h.harta[x+i][y+j]==0)
                        {x=x+i;
                        y=y+j;
                        h.harta[x][y]=3;
                        ok=true;}
    if(ok==false)
        in=false;
}

player4::player4()
{
    x=14;
    y=14;
    in=true;
}
bool player4::getin()
{
    return in;
}
void player4::mutare(mapa&h)
{
    bool ok=false;
    int li=-1,di=1,lj=-1,dj=1;
    if(x==0)
        {dirx=1;
        li=0;}
    if(x==h.dimensiune-1)
        {dirx=-1;
        di=0;}
    if(y==0)
        {diry=1;
        lj=0;}
    if(y==h.dimensiune-1)
        {diry=-1;
        dj=0;}
    for(int i=li;i<=di && ok==false;i++)
        for(int j=lj;j<=dj && ok==false;j++)
            if(h.harta[x+i][y+j]==9)
                {in=false;
                h.nrcomori--;
                x=x+i;
                y=y+j;
                h.harta[x][y]=4;
                ok=true;}
    if(x==0)
        {dirx=1;
        li=0;}
    if(x==h.dimensiune-1)
        {dirx=-1;
        di=0;}
    if(y==0)
        {diry=1;
        lj=0;}
    if(y==h.dimensiune-1)
        {diry=-1;
        dj=0;}
    if(h.harta[x+dirx][y+diry]==0 && ok==false)
    {
        x=x+dirx;
        y=y+diry;
        h.harta[x][y]=4;
        ok=true;
        dirx=dirx*(-1);
    }
    else
        if(ok==false)
            for(int i=li;i<=di && ok==false;i++)
                for(int j=lj;j<=dj && ok==false;j++)
                    if(h.harta[x+i][y+j]==0)
                        {x=x+i;
                        y=y+j;
                        h.harta[x][y]=4;
                        ok=true;}
    if(ok==false)
        in=false;
}
