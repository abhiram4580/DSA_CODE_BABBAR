#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l={1,2,3,4,5};
    auto it=find(l.begin(),l.end(),5);
    if(it==l.end()){
        cout<<" Not Found"<<endl;
    }
    else{
        cout<<" Found"<<endl;
    }
}