#include <iostream>
using namespace std;
int main()
{
    int age;
    char gender;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (M or F): ";
    cin >> gender;

  
    if (age >= 21 && gender == 'M') {
    cout << "You are eligible to be a bachelor.";

    }else {
    cout << "You are not eligible to be a bachelor.";
    }

  return 0;
}