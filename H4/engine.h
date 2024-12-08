#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
using namespace std;


class Engine
{
public:
    Engine() : horsepower(0), displacement(0.0){}
    Engine(int hp, double L) : horsepower(hp), displacement(L){}
    int getHorsepower() const { return horsepower; }
    void setHorsepower(int hp) { horsepower = hp; }
    double getDisplacement() const { return displacement; }
    void setDiscplasement(double L) { displacement = L; }
private:
    int horsepower;
    double displacement;
};

#endif // ENGINE_H
