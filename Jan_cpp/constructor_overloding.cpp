#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num = 12345;
    int ans = 0;
    int rem = 0;

    while (num>0)
    {
        rem = num%10;
        ans = ans+rem;
        num = num/10;
    }
    if (ans > 9) 
    {
    ans = ans / 10 + ans % 10;
    }


    cout<<ans;

    
}