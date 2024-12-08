#ifndef WHEEL_H
#define WHEEL_H
#include <iostream>
using namespace std;

class Wheel
{
public:
    Wheel() : size(0), type("") {}
    Wheel(int tuumaa, string kesarengas) : size(tuumaa), type(kesarengas) {}
    int getSize() const { return size; }
    void setSize(int tuumaa) {size = tuumaa; }
    string getType() const { return type; }
    void setType(string kesarengas) {type = kesarengas; }
private:
    int size;
    string type;
};

#endif // WHEEL_H
