#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string>m;
    m.insert({1,"gfg"});
    m.insert({2,"practice"});
    m.insert({3,"Hello"});
    if(m.find(3)==m.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;

    }
    for(auto it=m.find(2);it!=m.end();it++){
        cout<<(*it).first<<" ";
        cout<<(*it).second<<endl;
    }
    

return 0;
}