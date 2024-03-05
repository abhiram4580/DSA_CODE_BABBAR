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
    s.clear();
    cout<<s.size()<<endl;

  return 0;
}