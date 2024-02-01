#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num = 1011;
    int base = 2;
    int i = 0;
    int rem,ans;
    while (num>0)
    {
        rem=num%10;
        ans = ans+rem* pow(base,i);
        i++;
        num = num/10;
    }
    
    cout<<ans;
}

