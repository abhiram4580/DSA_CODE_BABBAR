#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1){
        return 0;


    }
    return fib(n-1)+fib(n-2);
}

int main(){
    cout<<fib(90)<<endl;

return 0;
}
