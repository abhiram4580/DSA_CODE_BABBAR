#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool areIsomorphic(string str1, string str2)
    {
        
        
        unordered_map<int,int>mp1,mp2;
        int m=str1.size();
        int n=str2.size();
        if(m!=n){
            return false;
        }
        for(int i=0;i<n;i++){
            if(mp1[str1[i]]!=mp2[str2[i]]){
                return false;
            }
            mp1[str1[i]]=i+1;
            mp2[str2[i]]=i+1;
        }
        return true;
        
    }

int main(){
    string s1="abc";
    string s2="xyz";
    int x=areIsomorphic(s1,s2);
    cout<<x<<endl;
    return 0;
}