#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int n){
    int k=n;
    int sum=0;
    while(k!=0){
        int l=k%10;
        sum=sum*10+l;
        k=k/10;

    }
    return (sum==n);
}

int main(){
    int n=1221;
    int f=Palindrome(n);
    cout<<f<<endl;
    return 0;
}