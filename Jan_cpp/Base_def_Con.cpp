#include<iostream>
using namespace std;

class Base
{
    int x;
    public:
    Base()
    {
        cout<<"\nBase default constructor";
    }
};
class Derived : public Base
{
    int y;
    public:
    Derived()
    {
        cout<<"\nDerived default constrictor";
    }
    Derived(int i)
    {
        cout<<"\nDerived parameterized constructor";
    }
};

int main()
{
    Base b;
    Derived d1;
    Derived d2(10);
}