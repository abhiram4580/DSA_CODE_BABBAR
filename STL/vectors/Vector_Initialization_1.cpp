#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl; // does out of bound index checking.
    }

    return 0;

}