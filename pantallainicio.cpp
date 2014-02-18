#include "pantallainicio.h"
#include "ui_pantallainicio.h"
#include <QDebug>
#include <ctime>
#include <algorithm>
#include <QDebug>

PantallaInicio::PantallaInicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PantallaInicio)
{
    ui->setupUi(this);
    crearCartas();
    enviarDatos();

}

PantallaInicio::~PantallaInicio()
{
    delete ui;
}

void PantallaInicio::crearCartas()
{
    QString nombres[4]={"cups","diam","heart","treb"};
    int posicion=0;
    int cont=0;
    int espacio=0;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=13;j++){
            QLabel* cartas=new LabelCarta(this);




            if(cont==0){
                cartas ->setGeometry(10,250,134,200);
                cont++;
                fila1.insertar(posicion,Carta(i-1,j,true,10,250));

            }else if(cont>=1 && cont<3){
                if(cont==1)
                    posicion=0;
                    espacio=0;

                cartas ->setGeometry(150,250+espacio,134,200);

                cont++;
                fila2.insertar(posicion,Carta(i-1,j,true,150,250+espacio));

                espacio+=10;
            }else if(cont>2 && cont<=5){
                if(cont==3){
                  posicion=0;
                  espacio=0;
                }
                cartas ->setGeometry(290,250+espacio,134,200);
                cont++;

                fila3.insertar(posicion,Carta(i-1,j,true,290,250+espacio));

                espacio+=10;
            }else if(cont>4 && cont<=9){
                if(cont==6){
                  posicion=0;
                  espacio=0;
                }
                cartas ->setGeometry(430,250+espacio,134,200);
                cont++;

                fila4.insertar(posicion,Carta(i-1,j,true,430,240+espacio));

                espacio+=10;

            }else if(cont>8 && cont<=14){
                if(cont==10){
                  posicion=0;
                  espacio=0;
                }
                cartas ->setGeometry(570,250+espacio,134,200);
                cont++;

                fila5.insertar(posicion,Carta(i-1,j,true,570,250+espacio));

                espacio+=10;
            }else if(cont>13 && cont<=20){
                if(cont==15){

                    posicion=0;
                    espacio=0;
                }

                cartas ->setGeometry(710,250+espacio,134,200);
                cont++;

                fila6.insertar(posicion,Carta(i-1,j,true,710,250+espacio));

                espacio+=10;
            }else if(cont>19 && cont<=27){
                if(cont==21){
                  posicion=0;
                  espacio=0;
                }
                cartas ->setGeometry(850,250+espacio,134,200);
                cont++;

                fila7.insertar(posicion,Carta(i-1,j,true,850,250+espacio));

                espacio+=10;
            }else{
                if(cont==28){
                    posicion=0;
                    cont++;
                }

                 cartas ->setGeometry(20,25,134,200);
                 listanaipe.insertar(posicion,Carta(i-1,j,true,20,20));

            }



            QString estilo("background-image: url(:/cartas/imagenes/cartas/"+nombres[i-1]+"_"
                           +QString::number(j)+".png)");
            cartas->setStyleSheet(estilo);

            posicion++;

        }
    }


}
void PantallaInicio::enviarDatos(){
    LabelCarta z = LabelCarta(fila5.fin().getx(),fila5.fin().gety());


    z.imprimir();

}



