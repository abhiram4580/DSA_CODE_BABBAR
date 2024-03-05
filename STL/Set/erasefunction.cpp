#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(3);
    s.insert(4);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    auto it=s.find(20);
    s.erase(it);
     cout<<"Solution 1"<<endl;
    for(auto x:s){
       
        cout<<x<<endl;
    }
    s.erase(it,s.end());
    cout<<"Solution 2"<<endl;
    for(auto x:s){
        
        cout<<x<<endl;
    }

  return 0;
}