#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1="geeksforgeeks";
    cout<<str1.length()<<endl;
    string str2=str1+"gfg";
    cout<<str2<<endl;
    cout<<str2.find("gfg")<<endl;
    cout<<str2.substr(1,3)<<endl;

    return 0;
}