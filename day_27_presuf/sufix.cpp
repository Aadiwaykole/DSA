#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1,2,3,4,5};

    int n = arr.size();

    vector<int> suffix(n);

    suffix[n-1] = arr[n-1];

    for(int i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] + arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << suffix[i] << " ";
    }

    return 0;
}