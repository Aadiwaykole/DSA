#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ; 

int main(){

    int n ;
    cout<<"enter the value of n :";
    cin>> n ; 

    vector<int> v(n);
    for(int i = 0; i <n ; i++){
        cin>>v[i];
    }

    //print array
    for( int i  = 0 ; i<n ; i++){
        cout << " the vector is "<< v[i]; 
    }

}