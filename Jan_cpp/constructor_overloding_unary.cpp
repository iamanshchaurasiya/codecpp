#include<iostream>
#include<math.h>
using namespace std;

class weight
{
    int kg;
    public:
    weight()
    {
        kg=0;
    }
    weight(int k)
    {
        kg=k;
    }
    void disp()
    {
        cout<<kg<<endl;
    }
    weight operator ++()
    {
        return weight(++kg);
    }
    weight operator ++(int)
    {
        return weight(kg++);
    }
    
}; // namespace std;

int main()
{
    weight w(10);
    w.disp();
    ++w;
    w.disp();
    w++;
    w.disp();
}