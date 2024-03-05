#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap<int,int>mp;
    mp.insert({1,22});
    mp.insert({2,25});
    mp.insert({2,22});
    mp.insert({4,25});
    auto it=mp.equal_range(2);
    for(auto itr=it.first;itr!=it.second;itr++){
        cout<<itr->first<<endl;
        cout<<itr->second<<endl;
    }
    return 0;
}