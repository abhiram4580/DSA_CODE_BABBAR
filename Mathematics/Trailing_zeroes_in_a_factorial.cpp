#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int TrailZeroes(int N){
    int res=0;
    for(int i=5;i<=N;i=i*5){
        res=res+N/i;
    }

    return res;
}


int main(){
    int N=10;
    cout<<TrailZeroes(N);
    return 0;
}