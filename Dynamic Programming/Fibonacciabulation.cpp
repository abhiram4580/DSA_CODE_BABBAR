#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    int f[n+1];
    f[1]=1;
    f[0]=0;
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }

    return f[n];
}



int main(){
    int n;
    n=8;
    cout<<fib(n)<<endl;
    return 0;
}