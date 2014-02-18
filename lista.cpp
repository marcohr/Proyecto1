#include "lista.h"
#include <QDebug>

Lista::Lista()
{
    this->inicio1=NULL;
    this->atras=NULL;
    this->ultimo=NULL;
    this->cont=0;

}

int Lista::insertar(int pos,Carta carta){
    Nodo *nuevo= new Nodo();
    nuevo->setCarta(carta);

    if(pos==0&&cont>0){
        Nodo *tem=inicio1->siguiente;
        inicio1=nuevo;
        inicio1->siguiente=tem;

        cont++;
        return 0;
    }
    if(pos==0){
        inicio1=nuevo;
        ultimo=nuevo;

        cont++;
        return 0;
    }else if(pos > 0 && pos<cont+1){
        Nodo *tem=inicio1;
        for(int i=0;i<cont-1;i++){
            tem=tem->siguiente;
        }
        tem->siguiente=nuevo;
        cont++;
        ultimo=nuevo;
        nuevo->atras=tem;

        return 0;

    }
    return -1;

}

Carta Lista::inicio(){
    return inicio1->getCarta();
}

Carta Lista::fin(){
    qDebug() <<"si";
    return ultimo->getCarta();
}

int Lista::eliminar(int n){
    if(n==0){
        inicio1=inicio1->siguiente;
        cont--;
        ultimo=inicio1;
        return 0;
    }else if(n==cont-1){
        Nodo *tem=inicio1;
        for(int i=1;i<n;i++){
            tem=tem->siguiente;
        }
        Nodo *tem1=tem->siguiente;
        tem1->atras=NULL;
        tem->siguiente=NULL;
        cont--;
        ultimo=tem;

        return 0;
    }else if(n<=cont){

        Nodo *tem=inicio1;
        for(int i=1;i<n;i++){
            tem=tem->siguiente;
        }
        Nodo *tem1=tem->siguiente->siguiente;
        tem->siguiente=tem->siguiente->siguiente;
        cont--;
        tem1->atras=tem;
         return 0;


    }


}

Carta Lista::recuperar(int pos){
    if(pos>=0 && pos <=cont){
         Nodo *tem=inicio1;
         for(int i=0;i<pos;i++){
            tem=tem->siguiente;
         }
            return tem->getCarta();
    }

}

void Lista::cambiarLugar(int pos){
    if(pos<cont){
        Nodo *tem=inicio1;
        Nodo *tem1=inicio1;
        for(int i=0;i<pos;i++){
            tem=tem->siguiente;
        }
        Carta nuevo=tem1->getCarta();
        Carta nuevo1=tem->getCarta();
        tem->setCarta(nuevo);
        tem1->setCarta(nuevo1);





    }
}
