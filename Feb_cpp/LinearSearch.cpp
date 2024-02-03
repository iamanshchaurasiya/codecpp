#include<iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[6] = {3,5,7,9,4,1};
    int ele = 5;
    int flag = 0;
    int i=0;
    
    for (i=0; i<n-1; i++)
    {
        if(arr[i]==ele)
        {
            flag = 1;
            break;
        }
        
    }
    if(flag==1)
    {
        cout<<"Element found at index: "<<i<<endl;
        cout<<"Element found at postition: "<<i+1<<endl;
    }
    else
    {
        cout<<" Element is not Found: "<<endl;
    }

    return 0;

}