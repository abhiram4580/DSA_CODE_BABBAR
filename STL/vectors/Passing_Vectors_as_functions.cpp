#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Pas(vector<int>&v){
    v.push_back(20);
    v.push_back(30);
    
}

int main(){
    vector<int>v{1,2,3,4};
    Pas(v);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}