#ifndef PANTALLAINICIO_H
#define PANTALLAINICIO_H
#include "lista.h"
#include "labelcarta.h"
#include "listafila1.h"
#include "listafila2.h"
#include "listafila3.h"
#include "listafila4.h"
#include "listafila5.h"
#include "listafila6.h"
#include "listafila7.h"

#include <QMainWindow>

namespace Ui {
class PantallaInicio;
}

class PantallaInicio : public QMainWindow
{
    Q_OBJECT

public:
    explicit PantallaInicio(QWidget *parent = 0);
    ~PantallaInicio();
    Lista listanaipe;
    ListaFila1 fila1;
    ListaFila2 fila2;
    ListaFila3 fila3;
    ListaFila4 fila4;
    ListaFila5 fila5;
    ListaFila6 fila6;
    ListaFila7 fila7;

   void crearCartas();
   void enviarDatos();


private:
    Ui::PantallaInicio *ui;
};

#endif // PANTALLAINICIO_H
