#include <iostream>

using namespace std;

int main (){

    int arr[6] = { 64, 25, 12, 22, 11, 10};

    for (int i= 0; i<5; i++ ){

        int index = i ; 

        for (int j = i+1; i<6; j++){

            if(arr[j]<arr[index])
            index = j;
        }

        swap (arr[i], arr[index]);
    }

    for (int i = 0; i<6; i++){
        cout << arr[i] << " ";
    }; 
};