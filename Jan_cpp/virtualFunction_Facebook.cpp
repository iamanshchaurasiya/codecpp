#include<iostream>
using namespace std;

class Facebook
{
    public:
    virtual void reaction()
    {
        cout<<"Like"<<endl;
    }
};
class FacebookNew: public Facebook
{
    public:
    void reaction()
    {
        cout<<"Like Sad Angry Lova HaHa"<<endl;
    }
};
int main()
{
    FacebookNew fb;
    Facebook*f=&fb;
    f->reaction();

    return 0;
}


