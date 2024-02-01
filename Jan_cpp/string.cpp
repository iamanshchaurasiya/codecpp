#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    // char c[10];
    // cin.getline(c,10);
    // cout<<c;

    // string s;
    // getline(cin,s);
    // cout<<s;
    // return 0;

    char ch[10];
    cout<<"Enter the first word : ";
    cin>>ch;
    cin.ignore();

    string s;
    cout<<"Enter the second word : ";
    getline(cin,s);

    cout<<"First word : ";
    cout<<ch<< endl;
    cout<<"Second word : ";
    cout<<s;
    return 0;
}
