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
    auto it=s.upper_bound(10);
    if(it!=s.end()){
        cout<<(*it)<<endl;
    }
    else{
        cout<<"Greater than the Greatest element present in the set"<<endl;
    }

  return 0;
}