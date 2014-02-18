#include "pantallainicio.h"
#include <QApplication>
#include "lista.h"
#include <QDebug>
#include "listafila5.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PantallaInicio w;
    w.show();



    return a.exec();
}

