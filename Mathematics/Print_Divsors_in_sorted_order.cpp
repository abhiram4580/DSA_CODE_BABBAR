#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintDivisors(int n){
    vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i==n/i){
                v.push_back(i);
            }
            else{
                v.push_back(i);
                v.push_back(n/i);
            }
        }

    }
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    
}

int main(){
    int n=6;
    PrintDivisors(n);
    return 0;
}