#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{6,4,5,6,8,3,1};
    make_heap(v.begin(),v.end());

    cout<<v.front()<<endl;
    make_heap(v.begin(),v.end(),greater<int>());
    cout<<v.front()<<endl;

    return 0;
}