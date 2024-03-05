#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>m;
    m["gfg"]=20;
    m["lol"]=40;
    m.insert({"courses",13});
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;


    }

    return 0;
}