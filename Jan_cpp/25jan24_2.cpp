#include<iostream>
#include<fstream>
using namespace std;

class Base
{
    virtual void message() = 0;
};

class Derived1 : public Base
{
    void message() override
    {
        cout<<"Derived Class";
    }
};

int main()
{
    Derived1 d1;
    Base * bp = dynamic_cast<Base*>(&d1);
    Derived1 *dp1 = dynamic_cast<Derived1*>(bp);
    if (dp != nullptr)
        cout<<"Not Null\n";
    else
    cout<<"Null";
    try
    {
        Derived1 &r1 = dynamic_cast<Derived1&>(*bp);
        cout<<"Dynamic casting is done Successfully for reference";

    }
    catch (bad_cast& ex)
    {
        cout<<"Dynamic Casting Faild for refernce";
    }

    return 0;
}