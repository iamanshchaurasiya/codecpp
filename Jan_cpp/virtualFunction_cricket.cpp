#include<iostream>
using namespace std;
class cricket
{
    public:
    virtual void specialShot()
    {
        cout<<"Special Shot"<<endl;
    }
};
class Dhoni: public cricket
{
    public:
    void specialShot()
    {
        cout<<"Helicopter Shot"<<endl;
    }
};
class Kohli: public cricket
{
    public:
    void specialShot()
    {
        cout<<"Cover Drive"<<endl;
    }
};
int main()
{
    Dhoni d;
    Kohli k;

    cricket *c = &d;
    cricket *c1 = &k;

    c->specialShot();
    c1->specialShot();
}

