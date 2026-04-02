#include <iostream>
using namespace std;

int main (){

    int arr [5] = {7,5,9,3,8};

    int key = 5; 

    int index = -1;


    for (int i=0; i<5; i++ ){

        if (arr[i] == key){

            index= i;
            break; 
        }
         
    }

    cout << index << endl;

    return 0;


}