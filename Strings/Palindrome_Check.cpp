#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsPal(string s){
    int begin=0;
    int end=s.length()-1;
    while(begin<=end){
        if(s[begin]!=s[end]){
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main(){
   string s="mada";
   int x=IsPal(s);
   cout<<x<<endl;
   return 0;
}