#include<iostream>
using namespace std;



//-----------------------------------------------------------------------------------------------------------------------------

class Flipkart

{
    public:
    void payment(string bank, int otp)
    {
        cout<<"Internet Banking"<<endl;
    }
    void payment(long int  cardNumber)
    {
        cout<<"Card Payment"<<endl;
    }
    void payment(string s)
    {
        cout<<"UPI payment"<<endl;
    }
    void payment(int a)
    {
        cout<<"COD"<<endl;
    }
};
int main()
{
    Flipkart fk;
    fk.payment("paytm",4334);
    fk.payment(897437567846);
    fk.payment("upi");
    fk.payment(4332);
}

//-----------------------------------------------------------------------------------------------------------------------------

