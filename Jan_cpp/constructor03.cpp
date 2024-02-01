#include<iostream>
using namespace std;
class Car
{
    int speed;
    int milage;
    public:
    car(int x)
    {
        speed = x;
        cout<<speed<<endl;
    }
    car(int x, int y)
    {
        speed = x;
        milage = y;
        cout<<speed<<" "<<milage;
    }
};
int main()
{
    Car c;
}