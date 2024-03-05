#include<iostream>
#include<bits/stdc++.h.>
using namespace std;

int main(){
    list<int>l{1,2,3,4,5};
    fill(l.begin(),l.end(),5);
    for(auto x:l){
        cout<<x<<endl;

    }

    return 0;
}