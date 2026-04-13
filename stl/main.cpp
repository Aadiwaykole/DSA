#include <iostream>
#include <vector>

using namespace std ;

int main(){

    //create a vector, declare

    vector<int>v; 
    vector<int>v1(5,1); //size and default value

    //size and capacity
    cout<<"size of v:"<< v.size()<< endl; 
    cout<<"capacity of v:"<< v.capacity()<< endl;

    v.push_back(2);
    v.push_back(3);

    v.push_back(19);

    cout<<"size of v:"<< v.size()<< endl; 
    cout<<"capacity of v:"<< v.capacity()<< endl;

    //update value
    v[1] = 10;


    vector<int>v3 = {1,2,3,4,5};
    cout<<"size of v3:"<< v3.size()<< endl; 
    cout<<"capacity of v3:"<< v3.capacity()<< endl;


    //delete value from vector

    vector<int>vnew;

    vnew.push_back(1);
    vnew.push_back(2);
    vnew.push_back(3);
    vnew.push_back(4);
    vnew.pop_back(); //delete last element

    cout<<"size of vnew:"<< vnew.size()<< endl; 
    cout<<"capacity of vnew:"<< vnew.capacity()<< endl;


    // vnew.erase(vnew.begin()); //delete first element
    vnew.erase(vnew.begin()+1); //delete element at index 1
    cout<<"size of vnew:"<< vnew.size()<< endl; 
    cout<<"capacity of vnew:"<< vnew.capacity()<< endl;

    vnew.insert(vnew.begin()+1, 10); //insert 10 at index 1
    //return an array

    for(int i=0; i<vnew.size(); i++){
        cout<< vnew[i]<< " ";
    }


    //all elements in vector remove 

    vnew.clear();
    cout<<"size of vnew:"<< vnew.size()<< endl;
    cout<<"capacity of vnew:"<< vnew.capacity()<< endl;
}