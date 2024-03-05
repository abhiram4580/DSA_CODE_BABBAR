#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l{1,2,3,44,3};
    auto it=l.begin();
    it++;
    it=l.insert(it,23);
    it=l.insert(it,3,20);
    l.remove(3);
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size()<<endl;
    
    return 0;
    
}