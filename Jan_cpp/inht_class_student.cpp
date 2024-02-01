#include<iostream>
using namespace std;

class student

{
    public:
    void RollNumber()
    {
        cout<<"Student Roll Number";
    }
    
};

class Subject: public student
{
    private:
    void Sub(float s1, float s2)
    {
        cout<<"Markes Obtain in the Subject";
    }

};

class Result: private Subject, public student
{
    public: 
    void Total_Marks()
    {
        cout<<"Results";
    }
};
int main()
{
    Result r;
    r.RollNumber();
    r.Sub(23.3,35.35);
    r.Total_Marks();

    return 0;
}

