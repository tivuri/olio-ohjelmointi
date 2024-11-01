#include "functions.h"


int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if (b == 0)
    {
        cout << "Nollalla ei voi jakaa" << endl;
        return 0;
    }
    else
    {
        return (float) a / b;
    }
}
