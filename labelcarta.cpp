#include "labelcarta.h"
#include <QDebug>
#include "listafila5.h"


LabelCarta::LabelCarta(int x,int y)
{
    qDebug() << "hola";
    this->lugar1=x;
    this->lugar2=y;
}
LabelCarta::LabelCarta(QWidget * papi):QLabel (papi){

}

void LabelCarta::mousePressEvent(QMouseEvent * e)
{
    qDebug()<<"kcmmcñlwmcñl";
    cordenadasXY=e->pos();

    if(cordenadasXY.x()==20 && cordenadasXY.y()==20){
        cordenadasXY.setX(170);
        cordenadasXY.setY(20);


    }





}

void LabelCarta::mouseMoveEvent(QMouseEvent * e)
{

    if(e->buttons() & Qt::LeftButton){
        QPoint diff=e->pos()- cordenadasXY;

        QPoint newpos=this->pos()+ diff;
        this->move(newpos);




    }
}

void LabelCarta::mouseReleaseEvent(QMouseEvent *e)
{


    QPoint diff=e->pos()- cordenadasXY;

    QPoint newpos=this->pos()+ diff;




    this->move(newpos);

}

void LabelCarta::ultimo1(int car,int y){

    lugar1=car;
    lugar2=y;




}
void LabelCarta::imprimir(){
    qDebug()<<lugar1;
    qDebug()<<lugar2;
}

int LabelCarta::getLugar1(){
    return this->lugar1;
}

int LabelCarta::getLugar2(){
    return this->lugar2;
}




