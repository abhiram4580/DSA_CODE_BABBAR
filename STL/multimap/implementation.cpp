#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap<int,int>mp;
    mp.insert({1,22});
    mp.insert({2,25});
    mp.insert({2,22});
    mp.insert({4,25});
    for(auto x: mp){
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }

    return 0;
}