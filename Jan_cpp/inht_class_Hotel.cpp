#include<iostream>
using namespace std;

class Hotel
{
    public:
    void Eat(int a)
    {
        cout<<"Pizza"<<endl;

    }
    void Eat(float b)
    {
        cout<<"Burger"<<endl;
    }
    void Eat(string s)
    {
        cout<<"Cold Drink"<<endl;
    }
};

int main()
{
    Hotel h;
    h.Eat(10);
    h.Eat(34.55f);
    h.Eat("Hai");
}

