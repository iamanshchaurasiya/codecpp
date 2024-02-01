#include<iostream>
#include<math.h>
using namespace std;

class Multiplication
{
    int a;
    int b;
    public:
    Multiplication()
    {
        a=0;
        b=0;
    }
    Multiplication(int x, int y)
    {
        a=x;
        b=y;
    }
    void disp()
    {
        cout<<a<<" "<<b<<" "<<endl;
    }
    Multiplication operator * (const Multiplication &obj)
    {
        Multiplication multiplies;
        multiplies.a = a*obj.a;
        multiplies.b = b*obj.b;
        return multiplies;
    }
};

int main()
{
    Multiplication a1(1,3), a2(2,5);
    Multiplication a3 = a1*a2;
    a3.disp();

    return 0;
}