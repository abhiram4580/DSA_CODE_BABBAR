#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l{1,2,3,4,5};
    auto it=find(l.begin(),l.end(),3);
    if(it==l.end()){
        cout<<" Not present"<<" ";
    }
    else{
        l.erase(it);
        l.insert(it,20);
    }
    for(int x:l){
        cout<<x<<" ";
    }
    return 0;
}