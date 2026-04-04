#include<iostream>
using namespace std;

int main() {
    // int arr[] = {5, 3, 1, 4};
    // int n = 4;

    // for(int i = 0; i < n-1; i++) {
    //     int minIndex = i;

    //     for(int j = i+1; j < n; j++) {
    //         if(arr[j] < arr[minIndex]) {
    //             minIndex = j;
    //         }
    //     }

    //     swap(arr[i], arr[minIndex]);
    // }

    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort (Descending)
    for(int i = 0; i < n-1; i++) {
        int maxIndex = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // swap
        swap(arr[i], arr[maxIndex]);7294
    }

    cout << "Sorted array (Descending): ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}