#include <iostream>
using namespace std; 

int Binary_search(int arr[], int n , int key){

    //start end mid; 
    int start=0, end=n-1,  mid ;

    while (start<=end){
        //mid ko find karo 
        mid= (start+end)/2;

        //arr[mid]==key
        if(arr[mid]==key)
        return mid;

        //arr[mid]<key
        else if (arr[mid]<key)
        start = mid+1; 

        //arr[mid]>key
        else
        end = mid+1;  
    }
    return -1; 
}

int main(){

    int arr[1000];

    int n;
    cout << "enter the value of n :";
    cin>> n ;

    cout<< "enter the element in array:";
    for (int i=0; i<n; i++){
        cin >> arr[i];

    }

    int key ; 
    cout<<"enther the kye";
    cin >> key ; 

    cout<< Binary_search (arr, n , key );


}