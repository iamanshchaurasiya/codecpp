#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("data.txt");
    myfile<<"Create a new file\n";
    myfile.close();

    return 0;
}