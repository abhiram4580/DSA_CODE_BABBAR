#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Abhiram";
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    cout<<endl;
    for(char x:s){
        cout<<x;
    }
    cout<<endl;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it);
    }

    return 0;
}