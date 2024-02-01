#include<iostream>
#include<string.h>

using namespace std;

struct student
{
    int rollno;
    char name[50];
    int m1,m2,m3;
    float avg;
};
int main()
{
    student s[6];

    for (int i = 1; i <= 3; i++)
    {
        /* code */
        cout<<"Roll No: "<<[i]<<endl;
        cout<<"Enter the name: ";
        cin>>s[i].name;
        cout<<"Enter the marks: "<<endl;
        cin>s[i].m1>>s[i].m2>>s[i].m3;
        cout<<"Marks Scored"<<s[i].m1>>s[i].m2>>s[i].m3;

        s[i].avg = (s[i].m1>>s[i].m2>>s[i].m3)/3;
        cout<<s[i].avg<<endl;
    }
    
    return 0;
    
}