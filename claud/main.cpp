// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = 5;   // size of array

//     // forward traversal
//     cout << "Forward: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     // Output: 10 20 30 40 50

//     // reverse traversal
//     cout << "Reverse: ";
//     for (int i = n-1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     // Output: 50 40 30 20 10

//     return 0;
// }



//taking input 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];   // create array of that size

//     // take input
//     cout << "Enter " << n << " numbers:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // print output
//     cout << "You entered: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }
// and get output 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];   // create array of that size

    // take input
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // print output
    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}