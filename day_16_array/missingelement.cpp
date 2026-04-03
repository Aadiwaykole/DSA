
#include <iostream>
using namespace std; 

int main() {
    
    // Find the missing element in an array of size n-1 containing
    // distinct integers from 1 to n.

    int n;
    cout << "Enter the size of the array (n): ";
    cin >> n;

    int arr[n-1];
    cout << "Enter " << n-1 << " distinct integers from 1 to " << n << ": ";
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    int total_sum = n * (n + 1) / 2; // sum of first n natural numbers
    int arr_sum = 0;

    for (int i = 0; i < n-1; i++) {
        arr_sum += arr[i];
    }

    int missing_element = total_sum - arr_sum;
    cout << "The missing element is: " << missing_element << endl;

    return 0;
}