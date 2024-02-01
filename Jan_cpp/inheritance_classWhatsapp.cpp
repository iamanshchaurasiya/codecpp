#include<iostream>
using namespace std;

class WhatsappV1

{
    public:
    void chat()
    {
        cout<<"Chating with BF/GF";
    }
};

class WhatsappV2: public WhatsappV1
{
    public:
    void call()
    {
        cout<<"Voice/Video Calling";
    }
};

class WhatsappV3: public WhatsappV2
{
    public:
    void Status()
    {
        cout<<"Status updation";
    }
};

int main()
{
    WhatsappV1 V1;
    V1.chat();
    cout<<endl;
    WhatsappV2 V2;
    V2.call();
    cout<<endl;
    WhatsappV3 V3;
    V3.Status();
    cout<<endl;

    return 0;
   
}

