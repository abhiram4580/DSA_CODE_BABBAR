#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool KthBit(int n,int k){
    if(n&(1<<(k-1))!=0){
        return true;
    }
    return false;
}

int main(){
    int n=5;
    int k=3;
    int x=KthBit(n,k);
    cout<<x<<endl;
}