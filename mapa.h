#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED
class mapa
{
    int dimensiune;
    int **harta;
    int nrcomori;
public:
    friend class player1;
    friend class player2;
    friend class player3;
    friend class player4;
    int getnrcomori();
    mapa();
    mapa(int);
    ~mapa();
    void afisare_el(int,int);
    void afisare_harta();
};

#endif // MAPA_H_INCLUDED
