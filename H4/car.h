#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"

#include <iostream>
using namespace std;

class Car
{
public:
    Car() : Horsepower(0), Displacement(0.0) {}
    Car(string, string);
    void setEngine();
    void setWheels();
    string getModel();
    void setModel(string);
    string getBrand();
    void setBrand(string);
    void printDetails();
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;
};

#endif // CAR_H
