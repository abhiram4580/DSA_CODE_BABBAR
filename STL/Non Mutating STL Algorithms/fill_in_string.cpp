#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Abhiram";
    fill(s.begin(),s.end(),'a');
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<endl;
    }

    return 0;
}