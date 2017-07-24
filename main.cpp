#include<QApplication>
#include"Screen.h"
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    Screen a;
    a.show();
    return app.exec();

}
