#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n = 5;
    int arr[5] = {15,16,6,8,5};
    bubbleSort(arr, n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}