#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    for(int i=2;i*i<=n;i++){
        if((n%i)==0){
             return false;
        }
    }
    return true;
}

int main(){
    int n=5;
    int x=IsPrime(n);
    cout<<x<<endl;

    return 0;
}