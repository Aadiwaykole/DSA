#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1,2,3,4,5};

    int n = arr.size();

    vector<int> pref(n);

    pref[0] = arr[0];

    for(int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + arr[i];
    }

    // printing prefix array
    for(int i = 0; i < n; i++) {
        cout << pref[i] << " ";
    }

    return 0;
}