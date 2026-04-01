#include <iostream>
#include <climits>
using namespace std;

int main (){

    // int arr[5]= {7,5,9,3,8};
    // int ans = INT_MAX;
    // //min value
    // for(int i=0; i<5; i++){
        
    //     if (arr[i]<ans){
    //         ans = arr[i];
    //     }

        
    // }
    // cout << ans << endl;


    // //max value

    // int ans2 = INT_MIN;
    // for(int i=0; i<5; i++){
    //     if (arr[i]>ans2){
    //         ans2 = arr[i];
    //     }

        
    // }
    // cout << ans2 << endl;
    // return 0;
    

    // for(int i =0; i<3; i++){
    //     cin>> arr[i];
    // }
    // for(int i =0; i<6; i++){
    //     cout<< arr[i]<< " ";
    // }


    //1: Take 20 elements from user input and find its sum with the help of an array

    // int arr2[20];

    // int sum = 0;
    // int avg = 0;

    // for(int i=0; i<20; i++){
    //     cin >> arr2[i];
    //     sum += arr2[i];
       
    // }
    // // for(int i =0; i<20; i++){
    // //     avg = sum/20;
    // // }
    // avg = sum/20;

    // cout << avg << endl;
    // return 0;


    // Find the index of a specific element in an
    // array, if the element is not present, print -1.
    // Ask the size of the array from the user and then implement it.



    // int n ;

    // cout << "enter size";
    // cin >> n;

    // int arr[n];

    // cout<< "enter element: ";

    // for (int i=0; i<n ; i++){
    //     cin >> arr[i];
    // }



    // int key;
    // cout<< "enter the element to search:";
    // cin>> key;

    // int index = -1; //default 

    // for (int i=0; i<n; i++){
    //     if(arr[i]==key){
    //         index =i;
    //         break;
    //     }
    // }

    // cout<< index << endl;
    // return 0;


        
    //: Create an array of char types and store ‘a’ to ‘z’ in it.
    // Then print the element of the arrays.

 
    char arr[26];

    // store a to z
    for(int i = 0; i < 26; i++) {
        arr[i] = 'a' + i;
    }

    // print array
    for(int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }

    return 0;
};


