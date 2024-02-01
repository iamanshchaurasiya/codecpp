#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[20];
    cin>>a;

    for(int i=0; i<strlen(a); i++)
    {
        int count = 0;

        for(int j=0; j<strlen(a); j++)

        if(a[i]==a[j])
        {
            count++;
        }
        if(count==1)
        {
            cout<<a[i];
            break;
        }
    }
}  



// {
// 	string string = "google";
// 	int index = -1;
// 	char fnc = ' ';
	
// 	if(string.size()==0){
// 	cout<<"EMPTY STRING"<<endl;
// 	}

// 	for (auto i : string) {
// 		if (count(string.begin(), string.end(), i) == 1) {
// 			fnc = i;
// 			break;
// 		}
// 		else {
// 			index += 1;
// 		}
// 	}
// 	if (index == string.size()-1) {
// 		cout << "All characters are repeating" << endl;
// 	}
// 	else {
// 		cout << "First non-repeating character is " << fnc
// 			<< endl;
// 	}
// 	return 0;
// }
