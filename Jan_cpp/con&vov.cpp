#include<iostream>
#include<string.h>
using namespace std;

int main()
{


    char a[100];
    int n;
    cin>>a;
    n=strlen(a);

    for(int i=0; i<n; i++)
    {
        if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' ||a[i]=='O' ||a[i]=='U')
        {
            cout<<a[i];
            cout<<" is Vowel";
        
        }
        else
        {
            cout<<a[i];
            cout<<" is Consonant";
        }
    }

    return 0;
}