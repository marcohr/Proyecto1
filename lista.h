#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <QDebug>

class Lista : public Nodo
{
public:

    Lista();
    Nodo *inicio1;
    Nodo* ultimo;
    Nodo *atras;
    int cont;

    int insertar(int pos,Carta carta);
    Carta inicio();
    Carta fin();
    Carta recuperar(int pos);
    int eliminar(int pos);
    void cambiarLugar(int pos);
};

#endif // LISTA_H
