#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){

    //create 2d vector

    int n, m ;
    cout<<"enter rows and column ";
    cin>>n>>m ; 
    vector<vector<int>>matrix(n,vector<int>(m,1));

    
    // for(int i =0; i<3; i++){
    //     for( int j=0; j<4; j++ ){

    //         cout<<matrix[i][j]<<" ";

    //     }
        

    // }
    // cout<< endl;



    //this is for knowing column and rows 
    // cout<<"rows = "<<matrix.size();
    // cout<<endl;
    // cout<<"col = " <<matrix[0].size();

    for(int i=0; i<n ; i++){
        for(int j=0; j<m; i++){
            cin>> matrix[i][j];

        }
    }

     for(int i=0; i<n ; i++){
        for(int j=0; j<m; i++){
            cout<< matrix[i][j];
            cout<< endl; 

        }
    }


}