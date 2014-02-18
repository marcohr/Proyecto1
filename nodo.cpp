#include "nodo.h"

Nodo::Nodo()
{
    this->siguiente=NULL;
    this->atras=NULL;
}

Carta Nodo::getCarta(){
    return carta;
}

void  Nodo::setCarta(Carta NuevaCarta){
    this->carta=NuevaCarta;
}
