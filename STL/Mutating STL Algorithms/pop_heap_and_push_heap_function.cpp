#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{6,7,4,3,2,1};
    make_heap(v.begin(),v.end(),greater<int>());
    cout<<v.front()<<endl;
    pop_heap(v.begin(),v.end(),greater<int>());
    cout<<v.size()<<endl;
    v[5]=0;
    cout<<v.size()<<endl;
    push_heap(v.begin(),v.end(),greater<int>());
    cout<<v.front()<<endl;
    return 0;

}