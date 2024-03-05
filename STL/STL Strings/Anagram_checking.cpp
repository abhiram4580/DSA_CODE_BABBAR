#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsAnagram(string s1,string s2){
    int count[256]={0};
    int n1=s1.length();
    int n2=s2.length();
    for(int i=0;i<n1;i++){
        count[s1[i]]++;
    }
    for(int i=0;i<n2;i++){
        count[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
    
}

int main(){
    string s1="listen";
    string s2="silent";
    int x=IsAnagram(s1,s2);
    cout<<x<<endl;
    return 0;
}