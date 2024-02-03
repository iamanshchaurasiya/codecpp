#include<iostream>
using namespace std;

int fun(int x)
{
    if(x<=1)
    return x;
    else
        return fun(x-2)+fun(x-1);
}
int main()
{
    int x = 6;
    cout<< fun(x);
    return 0;
}