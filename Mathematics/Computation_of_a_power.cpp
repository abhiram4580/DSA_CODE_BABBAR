#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Power(int x,int n){
    if(n==0){
        return 1;
    }
    int temp=Power(x,n/2);
    temp=temp*temp;
    if(n%2==0){
        return temp;
    }
    else{
        return temp*x;
    }
}

int main(){
    int x=3;
    int n=2;
    cout<<Power(x,n);
    

    return 0;
}