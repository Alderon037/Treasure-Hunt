#include "mapa.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
mapa::mapa()
{
    dimensiune=15;
    int l,c;
    harta=(int**)malloc(15*sizeof(int*));
    for(int i=0;i<15;i++)
        harta[i]=(int*)malloc(15*sizeof(int));
    for(int i=0;i<15;i++)
        for(int j=0;j<15;j++)
            harta[i][j]=0;
    harta[0][0]=1;
    harta[0][14]=2;
    harta[14][0]=3;
    harta[14][14]=4;
    for(int i=0;i<3;i++)
    {
        do{
        l=rand()%15;
        c=rand()%15;
        }while(harta[l][c]!=0);
        harta[l][c]=9;
    }
    nrcomori=3;
}
mapa::mapa(int x)
{
    dimensiune=x;
    int l,c;
    harta=(int**)malloc(x*sizeof(int*));
    for(int i=0;i<x;i++)
        harta[i]=(int*)malloc(x*sizeof(int));
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            harta[i][j]=0;
    harta[0][0]=1;
    harta[0][x-1]=2;
    harta[x-1][0]=3;
    harta[x-1][x-1]=4;
    for(int i=0;i<3;i++)
    {
        do{
        l=rand()%x;
        c=rand()%x;
        }while(harta[l][c]!=0);
        harta[l][c]=9;
    }
    nrcomori=3;
}
mapa::~mapa()
{
    for(int i=0;i<dimensiune;i++)
        delete harta[i];
    delete harta;
    dimensiune=0;
    nrcomori=0;
}
int mapa::getnrcomori()
{

}
void mapa::afisare_el(int x,int y)
{
    cout<<harta[x][y]<<endl;
}
void mapa::afisare_harta()
{
    for(int i=0;i<dimensiune;i++)
        {for(int j=0;j<dimensiune;j++)
            cout<<harta[i][j]<<' ';
        cout<<endl;}
    cout<<endl;
}
