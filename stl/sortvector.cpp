#include <iostream>
#include <vector>

using namespace std ;

int main (){

    vector<int>ans;

    ans.push_back(65);
    ans.push_back(24);
    ans.push_back(3);
    ans.push_back(4);
    ans.push_back(87);

    //sort in increasing order 
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i]<< " ";
    };

    //sort in decreasing order
    sort(ans.begin(), ans.end(), greater<int>()); //frist 
    sort(ans.rbegin(), ans.rend()); //second way
    cout<< endl;
    

}