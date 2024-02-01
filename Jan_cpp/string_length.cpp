#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    cout<<"length of the string is "<<s.length();


    char a[50], b[50];
    cout<<"Enter the word for a: ";
    cin>>a;
    strcpy(b,a);
    cout<<"The word in b: ";
    cout<<b;

    char a[50], b[50];
    cin>>a>>b;

    if(strcmp(b,a)==0)
    {
        cout<<"Same";
    }
    else{
        cout<<"Not Same";
    }

    return 0;
}