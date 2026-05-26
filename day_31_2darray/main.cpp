#include <iostream>
using namespace std;

//function printcol
void printcol(int arr[][4], int row, int c ol  )

int main(){

    //create 2 d array 
    int arr [3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};

    //print all the values in array
    for(int row= 0; row<3; row++){

        for(int col = 0 ; col<4; col++){

            cout << arr[row][col]<<" ";
        }
    };

    //print all the value in array col wise, function call
    printcol(arr, 3, 4 );
}