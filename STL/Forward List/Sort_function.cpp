#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int>l{5,4,3,2,1};
    l.sort();
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}