#include<iostream>
using namespace std;

class city
{
    public:
    void place(int a)
    {
        cout<<"Delhi"<<endl;
    }
    void place(int b, int c)
    {
        cout<<"Pune"<<endl;
    }
    void place(int a, int b, int c)
    {
        cout<<"Bangalore"<<endl;
    }
};
int main()
{
    city c;
    c.place(10);
    c.place(44,24);
    c.place(4,20,14);
}

