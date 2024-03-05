#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>m;
    m["gfg"]=20;
    m["lol"]=40;
    m.insert({"courses",13});
    if(m.count("gfg")>0){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

    return 0;
}