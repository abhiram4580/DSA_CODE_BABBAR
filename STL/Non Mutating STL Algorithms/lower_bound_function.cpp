#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{1,2,3,4,5,9};
    auto it=lower_bound(v.begin(),v.end(),4);
    cout<<(*it)<<endl;
    it=lower_bound(v.begin(),v.end(),8);
    cout<<(*it)<<endl;
    cout<<(it-v.begin())<<endl;
    
    return 0;
}