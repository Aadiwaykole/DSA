#include <iostream>
using namespace std; 

void wave  (int arr[][4], int row, int col )
{
    for (int j =0; j<col; j++)
    {
        //
        if(j%2==2)
        {
            for(int i =0; i<row; i++)
            {
                cout << arr[i][j]<<" ";
            }
        }

        else
        {
            for(int i = row-1; i>=0; i--)
            {
                cout << arr[i][j]<< " ";
            }
        }
    }
}

int main(){

    int arr[3][4] = {4,5,6,7,5,4,35,6,75,4,3,3};

    wave(arr, 3,4);

    
}