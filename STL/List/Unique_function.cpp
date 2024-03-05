#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l;
    l.assign({1,2,2,3,3,4,5,5,1});
    l.unique();
    for(auto x:l){
        cout<<x<<" ";

    }
    return 0;
}