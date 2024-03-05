#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>m;
    m.insert({1,200});
    m.insert({2,400});
    m[5]=400;
    m[3]=100;
    for(auto &x:m){
        cout<<x.first<<" ";
        cout<<x.second<<" ";
    }

return 0;
}