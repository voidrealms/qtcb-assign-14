#include <QCoreApplication>
#include <QDebug>

template<typename T>
int add(T a,T b) {
    return a + b;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 100;
    int y = 8;


    qInfo() << add<int>(x,y);

    return a.exec();
}
