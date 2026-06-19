#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

// void fun0 (int n ){
//     cout  << "days left for birthday"<< endl;
// }

// void fun1 (int n ){
//     cout << n << "days left for birthday"<< endl;
//     fun0(0);
// }

// void fun2 (int n ){
//     cout << n << "days left for birthday"<< endl;
//     fun1(n-1);
    
// }

// void fun3(int n ){
//     cout << n << "days left for birthday"<< endl ;
//     fun2(n-1);
// }


// void fun3(int n ){
//     cout << n << "days left for birthday"<< endl ;

// }

// void fun2 (int n ){
//     cout << n << "days left for birthday"<< endl;
// }

// void fun1 (int n ){
//     cout << n << "days left for birthday"<< endl;
// }

// void fun0 (int n ){
//     cout  << "days left for birthday"<< endl;
// }

//more simple way to define i t

void fun3( int n ){

    //base case 

    if(n==0){
        cout << "happy birthday "<< endl; 
        return ; 
    }
    cout << n << "days left for birthday"<< endl ; 
    fun3(n-1);

};
int main (){

    // int n =5;

//iterative approach 
    // for(int i =n ; i>0; i--){
    //     cout <<i << "days left for birthday "<< endl ;
    // }

    // cout << "happy birthday "; 


    //function call (recurisive)

    int n = 3; 

    // fun3(3);
    // fun2(2);
    // fun1(1); 
    // fun0(0);


    fun3(3);


}