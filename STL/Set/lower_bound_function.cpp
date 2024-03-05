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
    auto it=s.lower_bound(5);
    if(it!=s.end()){
        cout<< (*it)<<endl;
    }
    else{
        cout<<"Given Element is greater than the largest"<<endl;
    }


  return 0;
}