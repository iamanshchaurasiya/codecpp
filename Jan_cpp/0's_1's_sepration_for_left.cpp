
// write a program to segregate all the 0's in left side and 1's in right side in the same array with O()
#include<iostream>
using namespace std;

int main()
{
    int n=6;
    int arr[6]={1,0,1,0,1};
    int count=0;
    for(int i=0; i<n; i++)
    {   
        if(arr[i]==0)
        {
            count++;
        }
    }
    for (int i=0; i<count; i++)
    {
        arr[i]=0;
    }
    for (int i=count; i<n; i++) 
    {
        arr[i]=1;
    }
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}