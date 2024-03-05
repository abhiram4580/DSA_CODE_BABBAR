#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    cout<<s.size()<<endl;
    auto it=s.find(30);
    s.erase(it);
    cout<<s.size()<<endl;
    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;

    return 0;

}