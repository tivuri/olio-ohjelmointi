#include <iostream>

using namespace std;

int a, b;
int sum;
float quo;


int main()
{
    cout << "Anna kokonaisluku ";
    cin >> a;

    cout << "Anna toinen kokonaisluku ";
    cin >> b;

    sum = a + b;
    cout << "Kokonaislukujen summa on = " << sum << endl;

    quo = (float) a / b;
    cout << "Kokonaislukujen osamaara on = " << quo << endl;


    return 0;
}
