#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int m, n;
    int matrix[20][30];

    cout<<"Enter Number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; i < m; j++)
        {
            cout<<"Enter data in [" << i <<"][" << j << "]: ";
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}