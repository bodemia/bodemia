//communicate.cpp
#include "communicate.h"
#include <QDesktopWidget>
#include <QtGui>
Communicate::Communicate(QWidget *parent): QWidget(parent)
{
resize(800, 600);
QPushButton *plus = new QPushButton("+", this);
QPushButton *minus = new QPushButton("-", this);
QPushButton *mul = new QPushButton("*", this);
QPushButton *diva = new QPushButton("/", this);
plus->setGeometry(0, 0, 50, 30);
minus->setGeometry(50, 50, 50, 30);
mul->setGeometry(100, 100, 50, 30);
diva->setGeometry(150, 150, 50, 30);
label = new QLabel("0", this);
t1 = new QLineEdit(this);
t2 = new QLineEdit(this);
label->setGeometry(200, 200, 20, 30);
t1->setGeometry(250, 250, 20, 30);
t2->setGeometry(300, 300, 20, 30);

//Connect the clicked event of the button to
//the add method of the class
connect(plus, SIGNAL(clicked()), this, SLOT(add()));
connect(minus, SIGNAL(clicked()), this, SLOT(sub()));
connect(mul, SIGNAL(clicked()), this, SLOT(mul()));
connect(diva, SIGNAL(clicked()), this, SLOT(div()));
}

void Communicate::add()
{
//Change the text displayed in the label
int val1 = t1->text().toInt();
int val2 = t2->text().toInt();
int val3 = val1 + val2;
label->setText(QString::number(val3));
}

void Communicate::sub()
{
//Change the text displayed in the label
int val1 = t1->text().toInt();
int val2 = t2->text().toInt();
int val3 = val1 - val2;
label->setText(QString::number(val3));
}
void Communicate::mul()
{
//Change the text displayed in the label
int val1 = t1->text().toInt();
int val2 = t2->text().toInt();
int val3 = val1 * val2;
label->setText(QString::number(val3));
}
void Communicate::div()
{
//Change the text displayed in the label
int val1 = t1->text().toInt();
int val2 = t2->text().toInt();
int val3 = val1 / val2;
label->setText(QString::number(val3));
}
