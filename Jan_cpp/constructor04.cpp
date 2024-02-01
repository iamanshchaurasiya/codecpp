#include<iostream>
using namespace std;

bool isStrongPassword(string s)
{
    bool containsUpper = false;
    bool containsDigits = false;
    bool containsSpecial = false;

    for(auto c : s)
    {
    if(isdigit(c))
        containsDigits = true;
    if(ispunct(c))
        containsSpecial = true;
    if(isdigit(c))
        containsUpper =true;

   }
    if(containsDigits && containsSpecial && containsUpper && s.size() >=8)

    return true;

    return false;

}

int main()

{

  string password;

  cout<<"Enter the String: ";

  getline(cin, password);

  

  if(isStrongPassword(password))

  {

  cout<<"Strong Password";

  }

  

  else
  {
    cout<< "Not a Strong Password";
  }
  return 0;
}