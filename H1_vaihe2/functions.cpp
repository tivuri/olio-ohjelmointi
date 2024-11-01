#include "functions.h"
void calcSum(int a, int b)
{
    cout << a + b << endl;
}

void calcDiv(int a, int b)
{
    if (b == 0)
    {
        cout << "Nollalla ei voi jakaa " << endl;
    }
    else
    {
        cout << (float) a/b << endl;
    }
}
