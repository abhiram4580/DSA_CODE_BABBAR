#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    if(s.find(50)!=s.end()){
        cout<<"Found"<<endl;
        cout<<(*s.find(50))<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }


return 0;


}