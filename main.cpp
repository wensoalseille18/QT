#include "fenetreprincipal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FenetrePrincipal w;
    w.show();

    return a.exec();
}
