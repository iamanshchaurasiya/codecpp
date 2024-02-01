#include<iostream>
using namespace std;

int main()
{
    const int constVal = 45;
    int * mulptr = const_cast<int*>(&constVal);
    *mulptr
    int * ptr = new int(65);
    char * ch = reinterpret_cast <char*> (ptr);

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ch;

    return 0;
}