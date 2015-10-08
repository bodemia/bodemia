//main.cpp
#include "communicate.h"
int main(int argc, char *argv[])
{
QApplication app(argc, argv);
Communicate window;
window.setWindowTitle("Calc");
window.show();
return app.exec();
}
