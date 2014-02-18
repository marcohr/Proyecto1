#ifndef CARTA_H
#define CARTA_H

class Carta
{
public:

    Carta();
    Carta(int numero,int tipo,bool mostrada,int x,int y);
    int x;
    int y;
    int numero;
    int tipo;
    int basto;
    int diamante;
    int corazon;
    int trebol;
    bool mostrada;
    void setNumero(int numero);
    void setTipo(int tipo);
    void setMostrada(bool mostrada);
    int getNumero();
    int getTipo();
    int getBasto();
    int getDiamante();
    int getCorazon();
    int getTrebol();
    int getx();
    int gety();
    bool getMostrada();

};

#endif // CARTA_H
