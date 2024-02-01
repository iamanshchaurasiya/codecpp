#include <algorithm> 
#include <iostream> 
#include <vector>
using namespace std; 

void push_zeros_to_end(vector<int>& arr) 
{ 
    stable_partition(arr.begin(), 
			arr.end(), 
			[](int n) { return n != 0; }); 
} 

int main() 
{ 
    vector<int> arr{12,0,13,0,15}; 
	
push_zeros_to_end(arr); 
	
for(const auto & i : arr) 
	    cout << i << ' '; 

    cout << "\n"; 

return 0; 
} 
