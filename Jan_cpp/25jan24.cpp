#include<iostream>
#include<fstream>
using namespace std;

class Base
{
    virtual void message() = 0;
};

class Derived : public Base
{
    void message() override
    {
        cout<<"Derived Class";
    }
};

int main()
{
    Base * ptr = new Derived;
    Derived * dp = dynamic_cast<Derived*>(ptr);
    if (dp != nullptr)
    {
        cout<<"Dynamic casting is done Successfully";

    }
    else
    {
        cout<<"Dynamic Casting Faild...";
    }
    delete ptr;

    return 0;
}