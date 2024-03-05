#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Reverse(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);

    }
    for(int i=0;i<s.length();i++){
        s[i]=st.top();
        st.pop();
        
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    
}

int main(){
    string s="Abhiram";
    Reverse(s);
    return 0;
}