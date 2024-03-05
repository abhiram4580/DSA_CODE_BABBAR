#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>m;
    m.insert({1,200});
    m.insert({2,100});
    m.insert({3,400});
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" ";
        cout<<(*it).second<<" ";
        cout<<endl;

    }
    m.clear();
    cout<<m.size()<<endl;
    

return 0;
}