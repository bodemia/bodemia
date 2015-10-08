//qthello.cpp
//Include file for Qt
#include <QtGui>
int main(int argc, char *argv[])
{

QApplication app(argc, argv);
QWidget window;

//resize window to 320x240
window.resize(320, 240);
window.setWindowTitle(“Hello World!”);

//Show the window
window.show();

//Start the event loop
return app.exec();
}
