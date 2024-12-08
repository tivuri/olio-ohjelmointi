#include "chef.h"

Chef::Chef()
{

}

Chef::Chef(string n)
{
    this->name=n;
}

void Chef::makeSalad()
{

}

void Chef::makeSoup()
{

}

string Chef::getName() const
{
    return name;
}

void Chef::setName(const string &newName)
{
    name = newName;
}

