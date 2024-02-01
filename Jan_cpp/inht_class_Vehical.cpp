#include<iostream>
using namespace std;

class Vehical

{
    public:
    void Vehical_V()
    {
        cout<<" Executing Class Vehical()...."<<endl;
    }
};

class Fare
{
    public:
    void Fare_F()
    {
        cout<<"Execeting ClassFare()...."<<endl;
    }

};
class Car: public Vehical
{
    public:
    void Car_C()
    {
        cout<<"Executing Class Car()..."<<endl;
    }
};

class Bus: public Vehical, public Fare
{
    public:
    void Bus_B()
    {
        cout<<"Executing Class Bus()..."<<endl;
    }
};

int main()
{
   
    Bus b;
    b.Vehical_V();
    b.Fare_F();
    b.Bus_B();
    return 0;
}

