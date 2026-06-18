
#include <bits/stdc++.h>
using namespace std; 

int main (){


    vector <int >v ;

    // 
    
    //auto a

    //for erasing   .erase(vbegin()+2)


    queue<int > q; 
    q.push(1); //{1}
    q.push(2); //{1,2} 

    q.emplace(5)  ;  //{1,2,5}

    q.back()+=5; 

    cout << q.back()<< endl ;   //10
 
    cout << q.front();   // 1

    q.pop();

    // cout << q; 


    //proirity queue  = largerst element stay at top 






}