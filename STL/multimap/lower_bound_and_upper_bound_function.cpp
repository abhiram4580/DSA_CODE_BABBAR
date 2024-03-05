#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap<int,int>mp;
    mp.insert({1,22});
    mp.insert({2,25});
    mp.insert({2,22});
    mp.insert({4,25});
    auto it1=mp.upper_bound(2);
    auto it2=mp.lower_bound(2);
    cout<<(*it1).first<<" ";
    cout<<(*it2).first<<endl;

    return 0;
}