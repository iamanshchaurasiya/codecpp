#include<iostream>
using namespace std;

Basic level Inheritance
class base

{
    public:
    void b()
    {
        cout<<"Base class";
    }
};

class derived: public base
{
    public:
    void d()
    {
        cout<<"Derived class";
    }

};
int main()
{
    derived d;
    d.base();

    return 0;
}

