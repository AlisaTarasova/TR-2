#include "kommivoyazher.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Kommivoyazher w;
    w.show();
    return a.exec();
}
