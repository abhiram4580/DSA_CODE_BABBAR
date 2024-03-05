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

void Sieve(int n){
    vector<bool>ISPrime(n+1,true);
    for(int i=2;i*i<=n;i++){
    if(IsPrime(i)){
        for(int j=i*i;j<=n;j=j+i){
            ISPrime[i]=false;
        }
    }
    }
    for(int i=2;i<=n;i++){
       if(ISPrime[i]==true){
        cout<<i-1<<" ";
       }
    }

}

int main(){
    int n=4;
    Sieve(n);

    return 0;
}