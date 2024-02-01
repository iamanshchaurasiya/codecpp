#include<iostream>
using namespace std;

class smartPhone
{
    public:
    virtual void selfie()=0;
};

class androidPhone : public smartPhone
{
    public:
    void selfie()
    {
        cout<<"Android phone selfie"<<endl;
    }
};

class iphone : public smartPhone
{
    public:
    void selfie()
    {
        cout<<"iphone selfie"<<endl;
    }
};

int main()
{
    androidPhone ap;
    iphone ip;

    smartPhone * sa = &ap;
    smartPhone * si = &ip;

    sa->selfie();
    si->selfie();

    return 0;
}