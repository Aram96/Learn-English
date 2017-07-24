#include <QPushButton>
#include <QLineEdit>
#include <QBoxLayout>
#include <QLabel>
#include"Screen.h"

Screen::Screen()
{
this->setGeometry(400,400,400,400);
layout1 = new QVBoxLayout();
this->setLayout(layout1);
button1 = new QPushButton("ADD",this);
button2 = new QPushButton("PLAY",this);
layout1->addSpacing(12);
layout1->addWidget(button1);
layout1->addWidget(button2);
connect(button1, SIGNAL (pressed()), this, SLOT (addbutton()));
//layout->addWidget(line1);
//layout->addWidget(line2);
}
void Screen::play()
{
    
}
void Screen::add()
{   
    layout2 = new QVBoxLayout();
    this->setLayout(layout2);
    button3 = new QPushButton("ADD",this);
    line1 = new QLineEdit("En",this);
    line2 = new QLineEdit("RU",this);
    layout2->addWidget(line1);
    layout2->addWidget(line2);

}
//connect(button1, SIGNAL (pressed()), this, SLOT (addbutton()));
void Screen::playbutton()
{
    
}
void Screen::addbutton()
{   
    hide();
    add();
}
