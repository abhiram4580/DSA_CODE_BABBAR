#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    for(auto x:s){
        cout<<x<<endl;
    }

    return 0;
}