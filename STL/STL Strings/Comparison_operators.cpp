#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1="ngngngngng";
    string s2="njngmng";
    if(s1==s2){
        cout<<"same"<<endl;
    }
    else if(s1>s2){
        cout<<"greater"<<endl;
    }
    else {
        cout<<"Smaller"<<endl;
    }

    return 0;
}