#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int,greater<int>>m;
    m.insert({1,200});
    m.insert({2,400});
    m.insert({3,200});
    auto it=m.upper_bound(2);
    if(it!=m.end()){
        cout<<(*it).first<<endl;
    }
    else{
        cout<<"Greater than greatest element"<<endl;
    }

return 0;
}