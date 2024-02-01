#include<iostream>
#include<math.h>
using namespace std;

class Addition
{
    int a;
    int b;
    public:
    Addition()
    {
        a=0;
        b=0;
    }
    Addition(int x, int y)
    {
      a=x;
      b=y;
    }
    void disp()
    {
      cout<<a<<" "<<b<<" "<<endl;
    }
    Addition operator + (const Addition &obj)
    {
        Addition add;
        add.a = a+obj.a;
        add.b = b+obj.b;
        return add;
    }
};


int main()
{
    Addition a1(10,20), a2(30,40);
    Addition  a3 = a1+a2;
    a3.disp();

    return 0;
} 


