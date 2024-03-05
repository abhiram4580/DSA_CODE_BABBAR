#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsRotation(string &s1,string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    return ((s1+s1).find(s2)!=string::npos);
}

int main(){
    string s1="ram";
    string s2="amra";
    int x=IsRotation(s1,s2);
    cout<<x<<endl;
    return 0;
}