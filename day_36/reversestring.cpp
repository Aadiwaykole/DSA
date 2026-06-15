#include <iostream>
using namespace std; 

int main(){

    string s = "aditya";
    
    //reverse string
    int start = 0 , end =s.size()-1;

    while(start<end){
        swap(s[start],s[end]);
        start++, end--; 
    }
    cout << s << endl ;
   
//size of string 
    int size =0 ;

    while(s[size]!='\0'){
        size++;
    }
    cout << endl;
    cout<<size << endl;

//check is palendrom 

    string s2 = "naman";

    start = 0, end = s2.size()-1;

    while(start<end)
    {
        if(s2[start]!=s2[end]){
            cout << "now a pallindrome";
            return 0 ; 
        }
    start++, end--;
    }
    cout << "it is a pallindrome"; 
}