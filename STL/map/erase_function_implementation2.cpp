#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>m;
    m.insert({1,200});
    m.insert({2,400});
    m.insert({3,400});
    m.insert({4,500});
    m.insert({5,600});
    m.erase(m.find(2),m.end());
    for(auto x:m){
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }
return 0;
}