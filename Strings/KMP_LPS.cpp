#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LPS(string s,int lps[],int n){
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(s[i]==s[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
           if(len==0){
            lps[i]=0;
            i++;
           }
           else{
            len=lps[len-1];
           }
        }
    }
    return lps[n-1];
}

int main(){
    string s="aabbaab";
    int n=s.length();
    int lps[n];
    int x=LPS(s,lps,n);
    cout<<x<<endl;
    return 0;
}