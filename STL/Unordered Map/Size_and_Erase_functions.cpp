#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>m;
    m["gfg"]=20;
    m["lol"]=40;
    m.insert({"courses",13});
    cout<<m.size()<<endl;
    m.erase("gfg");
    cout<<m.size()<<endl;
    m.clear();
    cout<<m.size()<<endl;
    
    return 0;
}