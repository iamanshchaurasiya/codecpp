#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5]={11,12,13,14,15};
    int flag=0;
    for (int i=0; i<=n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Unshorted";
    }

    return 0;
}
