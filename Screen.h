#ifndef SCREEN_H
#define SCREEN_H
#include <QWidget>
#include <QObject>
class QBoxLayout;
class QLineEdit;
class QPushButton;
class QLabel;
class Screen : public QWidget
{
    Q_OBJECT
public:
    Screen();
    void play();
    void add();

private:
QLineEdit *line1;
QLineEdit *line2;
QLabel *label;
QPushButton *button1;
QPushButton *button2;
QPushButton *button3;
QBoxLayout *layout1;
QBoxLayout *layout2;

public slots:
void addbutton();
void playbutton();
};

#endif 
