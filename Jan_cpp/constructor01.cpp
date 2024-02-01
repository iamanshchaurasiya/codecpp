#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
        cout<<" Constructor Called"<<endl;
    }
    ~demo()
    {
        cout<<" Destructor Called"<<endl;
    }
};

int main()
{
    demo d;
}


