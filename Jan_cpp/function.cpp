#include<iostream>
using namespace std;

void fun()
{
    int x, y;
    cin>>x>>y;

    if(x<y)
    {
        cout<<"X is greater";
    }
    else
    {
        cout<<"Y is greater";
    }
}

int main()
{
    fun();

    return 0;
}






// int greatnum()
// {
//     int x,y;
//     cin>>x>>y;

//     if(x>y)
//     {
//         return x;
//     }
//     else{
//         return y;
//     }
// }

// int main()
// {
//     cout<<greatnum();
//     return 0;
// }




// void fun(int a, int b)
// {
//     if(a>b)
//     {
//         cout<<"A is greater";
//     }
//     else{
//         cout<<"B is greater";
//     }
// }


// int main()
// {
//     int x;
//     int y;
//     cin>>x>>y;
//     fun(x,y);

// }



int fun(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}


int main()
{
    int x;
    int y;
    cin>>x>>y;
    cout<<fun(x,y);

}