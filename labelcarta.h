#ifndef LABELCARTA_H
#define LABELCARTA_H
#include <QLabel>
#include <QMouseEvent>
#include "listafila1.h"
#include "listafila5.h"

class LabelCarta : public QLabel
{
public:
    LabelCarta(int x,int y);
    LabelCarta(QWidget*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);

    void ultimo1(int car,int y);
    void imprimir();
    int getLugar1();
    int getLugar2();
    void setnewpos1(QPoint n);
    QPoint getnewpos1();

    QPoint cordenadasXY;
    QPoint newpos1;

    Carta fila5;
    int lugar1;
    int lugar2;


};

#endif // LABELCARTA_H
