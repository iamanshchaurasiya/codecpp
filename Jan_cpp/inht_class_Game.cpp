#include<iostream>
using namespace std;

class  Game
{
    public:
    void play(int a, string s)
    {
        cout<<" cricket"<<endl;

    }
    void play(string b, int y)
    {
        cout<<" Hockey"<<endl;
    }

};
int main()
{
    Game g;
    g.play(123,"abc");
}
