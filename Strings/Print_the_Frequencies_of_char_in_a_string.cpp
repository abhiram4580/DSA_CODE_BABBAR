#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Frequencies(string str){
    int n=str.length();
    int count[256]={0};
    for(int i=0;i<n;i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<256;i++){
        if(count[i]>0){
            cout<<(char)(i+'a')<<" "<<count[i]<<endl;
            
        }
    
    }
}

int main(){
    string s="geeksforgeeks";
    Frequencies(s);
    return 0;
}