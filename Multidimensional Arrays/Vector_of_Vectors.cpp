#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int m=4;
    int n=2;
    vector<vector<int>>v;
    for(int i=0;i<m;i++){
        vector<int>arr;
        for(int j=0;j<n;j++){
            arr.push_back(10);
        }
        v.push_back(arr);
    
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
    }
    return 0;
}

