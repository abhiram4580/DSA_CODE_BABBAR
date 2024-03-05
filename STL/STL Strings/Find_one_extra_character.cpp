#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char FindExtra(string s1,string s2){
    int n=s1.length();
    int  res;
    for(int i=0;i<n;i++){
        res=res^s1[i]^s2[i];
    }
    res=res^s2[n];
    return (char)res;
}

int main(){
   string s1="aabcbc";
   string s2="abbccba";
   char d=FindExtra(s1,s2);
   cout<<d<<endl;

   return 0;
}