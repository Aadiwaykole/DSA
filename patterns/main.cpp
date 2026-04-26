#include <iostream>
using namespace std;

int main(){
    int i , j ; 
    int n =4; 

    // for(i=0; i<n; i++){
    //     for (j=1; j<=n; j++){
    //         cout<< "1 "; 
    //     }
    //     cout<< endl;
    // }


    // for(i=0; i<=n; i++){
    //     for(j=0; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<< endl; 
    // }

    // for(i=n; i>0; i--){
    //     for (j=0; j<i; j++){
    //         cout<< "* ";
    //     }
    //     cout<< endl; 
    // }

    for(i=1; i<=n; i++){

        //space
        for(j=1; j<=n-i; j++){
            cout<< " ";
        }
        //star

        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl; 
    }



}