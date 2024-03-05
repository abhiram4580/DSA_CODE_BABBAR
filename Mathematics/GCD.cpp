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

int main(){
    int a=55;
    int b=65;
    int x=GCD(a,b);
    cout<<x<<endl;


return 0;
}