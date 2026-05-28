//print row index with maximum sum 


#include <iostream>
#include <climits>
using namespace std; 

void printrowindex(int arr[][4],int row, int col)
{
    //max row index print
    int index = -1, sum = INT_MIN;

    for(int i=0; i<row; i++)
    {
        int total = 0;

        for(int j = 0; i<col; i++)
        {
            total += arr[i][j];
        }

        if(sum <total)
        {
            sum = total;
            index = i ; 
        }
    }
    cout<<index<< " "; 
}

int main(){
    int arr4 [3][4]= {5,67,4,3,5,6,7,5,3,5,4,6};

    printrowindex(arr4, 3,4);

}