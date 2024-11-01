#include "functions.h"
#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Anna kokonaisluku ";
    cin >> a;

    cout << "Anna toinen kokonaisluku ";
    cin >> b;

    int sum = retSum(a, b);
    float div = retDiv(a, b);

    cout << "Lukujen summa on " << sum  << endl;
    cout << "lukujen osamaara on " << div << endl;

    return 0;
}
