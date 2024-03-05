#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// If it starts from 1;
int Jos(int n,int k){
    if(n==0){
        return 0;
    }
    else{
        return (Jos(n-1,k)+k)%n;
    }
}

int main(){
    int n=7;
    int k=3;
    cout<<Jos(n,k)+1<<endl;

    return 0;
}