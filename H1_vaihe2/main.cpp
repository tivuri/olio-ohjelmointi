#include "functions.h"
#include <iostream>

using namespace std;



int main()
{
    int a;
    cout << "Anna kokonaisluku ";
    cin >> a;

    int b;
    cout << "Anna toinen kokonaisluku ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);
    return 0;
}
