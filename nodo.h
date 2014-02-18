#ifndef NODO_H
#define NODO_H
#include "carta.h"
#include <iostream>
class Nodo
{
public:
    Nodo *siguiente;
    Nodo *atras;
    Carta carta;
    Carta getCarta();
    void setCarta(Carta NuevaCarta);
    Nodo();
};

#endif // NODO_H
