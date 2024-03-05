#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{1,3,2,3,4,5};
    auto it1=min_element(v.begin(),v.end());
    auto it2=max_element(v.begin(),v.end());
    cout<<(*it1)<<endl;
    cout<<(*it2)<<endl;
    return 0;
    }