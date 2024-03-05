#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string FindExtra(string s1,string s2){
    string z;
    int count[256]={0};
    for(char x:s1){
        count[x]++;
    }
    for(char x:s2){
        count[x]--;
    }
    for(int i=0;i<=256;i++){
        if(count[i]==1){
          z=(char)i;  
        }
    }
    return z;

}

int main(){
    string s1="aabcbc";
    string s2="abbccba";
    string c=FindExtra(s1,s2);
    cout<<c<<endl;
   
   
   return 0;
}