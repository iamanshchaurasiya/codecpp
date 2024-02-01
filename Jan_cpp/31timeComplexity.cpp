#include<iostream>
using namespace std;
int main()
{
    int low = 0;
    int high = n;
    int mid = (low+high)/2;
   
while (low<=high)
{
    mid=(low+high)/2;
    if(n<arr[mid])
        high=mid-1;
    else if (n>arr[mid])
        low=mid+1;
        else
            break;
}

}