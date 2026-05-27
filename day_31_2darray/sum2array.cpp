#include <iostream>
using namespace std;

int main(){

    int arr [3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};

    int arr2 [3][4]= {6,5,4,8,9,3,2,1,7,8,9,6};

    int ans[3][4];

    //add 2 matrix
    // for(int row =0 ; row<3; row++)
    // for(int col= 0; col<4; col++)
    // {
    //     ans[row][col]= arr[row][col]+arr2[row][col];
    // }


    // for(int row =0 ; row<3; row++)
    // for(int col= 0; col<4; col++){
    //     cout<< ans [row][col]<< " ";
    // }


    //substraction of 2 matrix 

    int arr4 [3][4]= {5,67,4,3,5,6,7,5,3,5,4,6};

    int arr3 [3][4];

    int ans2 [3] [4];

    cout <<"enter the value of 2d array";

    for(int i =0; i<3; i++){
        for(int j =0; j<4; j++){
            cin>> arr3[i][j];
        }
    }

        for(int i =0; i<3; i++){
        for(int j =0; j<4; j++){
            ans2 [i][j] = arr4[i][j]-arr3[i][j];
        }
    }

        for(int i =0; i<3; i++){
        for(int j =0; j<4; j++){
            cout<< ans2 [i][j] <<" ";
        }
    }


}