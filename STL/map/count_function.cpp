#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>m;
    m.insert({1,200});
    m.insert({2,400});
    m.insert({3,200});
    m.insert({4,200});
    if(m.count(2)==0){
        cout<<"Not Present"<<endl;
    }
    else{
        cout<<"Present"<<endl;
    }

    
    

return 0;
}