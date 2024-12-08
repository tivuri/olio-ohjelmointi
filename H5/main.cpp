#include "aggregationa.h"
#include "assosiationa.h"


#include <iostream>


using namespace std;

int main()
{
    int a = 5;
    int b = 10;


    int &ref = a;
    int &ref2 = b;
    int &refA = a;


    int* myPointer = &ref2;


    cout<<"a:n arvo on: "<<a<<" ja osoite on: "<<&ref<<endl;
    cout<<"b:n arvo on: "<<b<<" ja osoite on: "<<&ref2<<endl;

    cout<<endl;

    cout<<"Pointterin osoittama osoite on: "<<&ref<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<ref<<endl;

    cout<<endl;

    cout<<"Pointerin osoittama osoite on on: "<<myPointer<<endl;
    cout<<"Ponterin osoittaman muistipaikan arvo on: "<<ref2<<endl;

    cout<<endl;

    cout<<"refA osoittaa osoitteeseen: "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on: "<<a<<endl;

    cout<<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki: "<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<endl;

    cout<<"Aggregaatio esimerkki: "<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr: "<<objAggr.getBinfo()<<endl;
    cout<<endl;


    return 0;
}
