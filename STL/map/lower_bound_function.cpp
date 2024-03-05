#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>m;
    m.insert({1,200});
    m.insert({2,400});
    m.insert({3,500});
    auto it=m.lower_bound(2);
    if(it==m.end()){
        cout<<"Greater than the Greatest element"<<endl;
    }
    else{
        cout<<(*it).first<<endl;
    }

return 0;
}