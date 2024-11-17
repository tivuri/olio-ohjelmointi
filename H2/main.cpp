#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    //luodaan pino olio

    Car objCar;
    objCar.setBrand("Saab");
    objCar.setModel("900");
    objCar.setYearModel(95);
    objCar.printData();

    //luodaan keko olio

    Rectangle *objRectangle;
    objRectangle = new Rectangle();
    objRectangle->setWidth(34);
    objRectangle->setHeight(12);
    cout<<"-----------------------"<<endl;
    cout<<"Suorakulmion pinta-ala = "<<objRectangle->getArea()<<endl;
    cout<<"Suorakulmion ymparysmitta = "<<objRectangle->getCircum()<<endl;
    cout<<"-----------------------"<<endl;
    delete objRectangle;
    objRectangle=nullptr;


    //luodaan smart pointer olio

    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Tino Vuori");
    objStudent->setStudentNumber(140);
    objStudent->setAverage(3.5);

    //tulostetaan opiskelijan tiedot käyttämällä get-metodia

    cout<<"------------------"<<endl;
    cout<<"Opiskelijan nimi: "<<objStudent->getName()<<endl;
    cout<<"Opiskelijan numero: "<<objStudent->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<objStudent->getAverage()<<endl;
    cout<<"------------------"<<endl;

    return 0;
}
