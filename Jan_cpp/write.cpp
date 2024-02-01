#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream myfile("data.txt");
    if(!myfile.is_open())
    {
        cout<<"File not foud";
    }
    else
    {
        myfile<<"ios::in  Open for input operations.\n";
        myfile<<"ios::out Open for output operation.\n";
        myfile<<"ios::binary Open in binary mode.\n";
        myfile<<"ios::ate Set the initial position at the end of the file. If this flag is not set, the initial position is the beginning of the file.\n";
        myfile<<"ios::app All output operations are performed at the end of the file, appending thread content to the current content of the file.\n";
        myfile<<"ios::trunc If the file is opened for output operations and it already existed, is string stream previous content is deleted and replaced by the new file.\n";
        myfile.close();

        cout<<"Successful\n";

        return 0;

    }
}

