#include "carta.h"

Carta::Carta()
{
}

Carta::Carta(int numero,int tipo,bool mostrada,int x,int y){
    this->numero=numero;
    this->tipo=tipo;
    this->mostrada=mostrada;
    this->basto=0;
    this->diamante=1;
    this->corazon=2;
    this->trebol=3;
    this->x=x;
    this->y=y;

}

void Carta::setNumero(int numero){
    this->numero=numero;
}

void Carta::setTipo(int tipo){
    this->tipo=tipo;
}

void Carta::setMostrada(bool mostrada){
    this-> mostrada=mostrada;
}

int Carta::getx(){
    return this->x;
}

int Carta::gety(){
    return this->y;
}

int Carta::getNumero(){
    return numero;
}

int Carta::getTipo(){
    return tipo;
}

bool Carta::getMostrada(){
    return mostrada;
}

int Carta::getBasto(){
    return basto;
}
int Carta::getDiamante(){
    return diamante;
}

int Carta::getCorazon(){
    return corazon;
}

int Carta::getTrebol(){
    return trebol;
}
