#include "calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

Calculator calculator;
calculator.setWindowTitle("Numeric Keypad");
calculator.resize(500,500);
calculator.show();
    return a.exec();
}
