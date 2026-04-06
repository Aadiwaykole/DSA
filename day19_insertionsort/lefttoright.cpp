#include <iostream>
using namespace std; 

int main(){

    int arr[1000];
    int n;

    cout <<"enter the size of array";
    cin>>n; 

    cout<<"enter the element in array";
    for (int i=0; i <n ; i++){
        cin >> arr[i];
    }

    // 🔥 SAME PATTERN, bas reverse direction
    for (int i=n-2; i>=0; i--)   // change here
    {
        for (int j=i; j<n-1; j++)   // change here
        {
            if (arr[j] > arr[j+1])   // ascending
                swap(arr[j], arr[j+1]);
            else
                break; 
        }
    }

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}