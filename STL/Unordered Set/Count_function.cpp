#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    if(s.count(40)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}