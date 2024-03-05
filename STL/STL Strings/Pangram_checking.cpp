#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsPangram(string s){
    int n=s.length();
    if(n<26){
        return false;
    }
    bool visited[26]={0};
    for(int i=0;i<n;i++){
        char x=s[i];
        if(x>='a' && x<='z'){
            visited[x-'a']=true;
        }
        if(x>='A' && x<='Z'){
            visited[x-'A']=true;
        }
        

            
            
    }
    for(int i=0;i<26;i++){
        if(visited[i]==false){
            return false;
        }
    
    }
    return true;
}

int main(){
    string s="The quick brown fox jumps over the lazy dog";
    int x=IsPangram(s);
    cout<<x<<endl;

    return 0;
}