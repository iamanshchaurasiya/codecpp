#include<iostream>
using namespace std;

//single level Inheritance
class Instagramv1

{
    public:
    void Instagramold()
    {
        cout<<"Executing Instagram old";
    }
};

class Instagramv2: public Instagramv1
{
    public:
    void Instagramnew()
    {
        cout<<"Executing Instagram new";
    }
};

int main()
{
    Instagramv1 v1;
    v1.Instagramold();
    cout<<endl;
    Instagramv2 v2;
    v2.Instagramnew();
    cout<<endl;

    return 0;
}

