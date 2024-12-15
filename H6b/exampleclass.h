#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H
#include <QThread>
#include <QCoreApplication>

#include <QObject>

class ExampleClass : public QObject
{
    Q_OBJECT
public:
    void startToWait();

    explicit ExampleClass(QObject *parent = nullptr);

signals:
    void readyToSay();

public slots:
    void sayHelloSlot();
};

#endif // EXAMPLECLASS_H
