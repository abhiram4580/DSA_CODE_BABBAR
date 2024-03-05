#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int>l{1,2,3,4,5};
    auto it=l.insert_after(l.begin(),34);
    it=l.insert_after(it,{52});
    it=l.emplace_after(it,69);
    it=l.erase_after(it);
    for(int x:l){
        cout<<x<<" ";
    }

    return 0;


}