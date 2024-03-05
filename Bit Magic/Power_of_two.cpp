#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Powerof2(int n){
    if(n==0){
        return false;
    }
    return ((n&(n-1))==0);
    
}

int main(){
    int n=16;
    int x=Powerof2(n);
    cout<<x<<endl;

    return 0;
}