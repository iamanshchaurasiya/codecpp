#include<iostream>
using namespace std;

class demo
{
    public:

    int a=10;

    void disp()
    {
        cout<<"Executing Display()..."<<endl;
    }
};
int main()
{
    demo d;
    cout<<d.a<<endl;
    d.disp();
}



