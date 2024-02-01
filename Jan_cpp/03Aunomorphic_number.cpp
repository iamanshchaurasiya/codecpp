#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a=25,b=a*a;
    int x,y;
    int flag=0;

    while (a!=0 && b!=0)
    {   
        x=a%10;
        y=b%10;

    if(x!=y)
    {
        flag=1;
        break;
    }
    a = a/10;
    b = b/10;
    }
    if(flag==0)
    {
        cout<<"Automorphic Number";
    }
    else
    {
        cout<<"Not an Automorphic Number";
    }
    
}
