#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{5,4,5,43,2};
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<endl;
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int x:v){
        cout<<x<<endl;
    }
    return 0;
}