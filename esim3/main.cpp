#include <iostream>
#include "myfunctions.h"
using namespace std;
int kertoma(int n){

}
int main()
{
    int num;
    int result;
    cout << "Lasketaan kertoma!"<<endl;
    cout << "Anna positiivinen kokonaisluku" << endl;
    cin >> num;
    result=factorial(num);
    if(result==-1){
        cout << "Kertomaa ei voi laskea negatiiviselle luvulle" << endl;

     }else {

    cout << "Luvun" << num << " kertoma = " << result << endl;
     }
    return 0;
}
