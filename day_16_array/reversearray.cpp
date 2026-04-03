#include <iostream>
using namespace std;


int main (){


    int arr [6] = {7,5,9,3,8,2};

    int start =0;
    int end = 5;


    while(start <end){

        swap(arr[start], arr[end]);
        start++;
        end--;  
    }


    for(int i = 0; i <6; i++){

        cout << arr[i] << " ";
    }

}