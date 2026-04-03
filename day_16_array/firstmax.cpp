#include <iostream>
using namespace std;

int main() {

    int arr[5] = {7, 5, 9, 3, 8};

    int max = arr[0];  // assume first element is max

    for (int i =1; i<6; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }

    cout << "Maximum = " << max;

    return 0;
}