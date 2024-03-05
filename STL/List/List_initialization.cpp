#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l{1,2,3,4};
    l.push_back(20);
    l.push_front(10);
    l.push_front(30);
    l.push_back(40);
    l.pop_back();
    l.pop_front();
    for(int x:l){
        cout<<x<<" ";
    }

    return 0;
}