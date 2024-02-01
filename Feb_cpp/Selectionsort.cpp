#include<iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main()
{
    int n = 6;
    int arr[6] = {7,8,10,5,3,2};
    selectionsort(arr, n);
    for(int i=0; i<n-1; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}