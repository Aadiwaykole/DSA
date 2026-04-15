//brute force method ==
// try all the possible solution and pick the one 


//Q find the pair with given difference in sorted array
//here we try to apply brute force first , 
//here we can apply two sum approach 

#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int k = 2;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            
            if(arr[j] - arr[i] == k) {
                cout << "Pair found: " << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }

    cout << "No pair found";
    return 0;
}