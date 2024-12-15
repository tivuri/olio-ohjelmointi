#include "exampleclass.h"

void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

ExampleClass::ExampleClass(QObject *parent) : QObject{parent}
{
    qDebug()<<"Start";
    connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()));
    qDebug()<<"End";
}

void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";
}
