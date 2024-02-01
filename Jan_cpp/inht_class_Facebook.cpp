#include<iostream>
using namespace std;

class Facebook

{
    public:
    void login(long int num, string passwword)
    {
        cout<<"Login using Mobile Number"<<endl;
    }
    void login(string username, string passwword)
    {
        cout<<"Login using Username "<<endl;
    }
};
int main()
{
    Facebook fb;
    fb.login(9155452233, "password");
    fb.login("abc@facebook", "password");
}

