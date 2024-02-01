#include<iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>temp)
        {
            /* code */
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }
}
int main()
{
    int n=6;
    int arr[6] = {5,4,10,1,6,2};
    InsertionSort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}