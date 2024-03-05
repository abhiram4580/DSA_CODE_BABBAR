#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int LCM(int a,int b){
    return (a*b/GCD(a,b));
}


int main(){
    int a=2;
    int b=3;
    int x=LCM(a,b);
    cout<<x<<endl;

    return 0;
}