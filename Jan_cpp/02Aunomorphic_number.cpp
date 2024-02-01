#include<iostream>
#include<math.h>
using namespace std;

bool isAutomorphic(int n) {
  int sq = n * n;
  while (n > 0) {
    if (n % 10 != sq % 10) {
      return false;
    }
    n /= 10;
    sq /= 10;
  }
  return true;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  if (isAutomorphic(n)) {
    cout << n << " is an automorphic number." << endl;
  } else {
    cout << n << " is not an automorphic number." << endl;
  }
  return 0;
}
