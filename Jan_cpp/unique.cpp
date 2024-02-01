#include<iostream>
using namespace std;

int main()
{
    int n=12;
    int a=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            a+=i;
        }
    }
    if(n<a)
    cout<<"AN";
    else
    cout<<"MAN";
}