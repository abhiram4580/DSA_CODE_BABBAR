#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsPal(string s1,string s2){
    int j=0;
    int m=s1.length();
    int n=s2.length();
    for(int i=0;i<m && j<n;i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
    return(j==n);
}

int main(){
    string s1="ABCDA";
    string s2="AD";
    int x=IsPal(s1,s2);
    cout<<x<<endl;
    return 0;
}