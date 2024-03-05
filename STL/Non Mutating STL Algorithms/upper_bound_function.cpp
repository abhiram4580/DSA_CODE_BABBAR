#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<int>v{1,2,3,4,5,8};
    auto it=upper_bound(v.begin(),v.end(),4);
    cout<<(*it)<<endl;
    it=upper_bound(v.begin(),v.end(),6);
    cout<<(*it)<<endl;
    cout<<(it-v.begin())<<endl;
    return 0;
}