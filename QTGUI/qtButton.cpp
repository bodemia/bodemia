#include <QtGui>
int main(int argc, char *argv[])
{

QApplication app(argc, argv);
QWidget window;
window.resize(320, 240);
window.setWindowTitle(“Window with a button”);
window.show();

//Create a button with the text “Press me”
//as a child of the main window
QPushButton *button = new QPushButton("Press me", &window);

//move the button into position
button->move(100, 100);
button->show();

return app.exec();
}
