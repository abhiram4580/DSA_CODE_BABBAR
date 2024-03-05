#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int>l1{1,2,6,7,8};
    forward_list<int>l2{3,4,10};
    l1.merge(l2);
    for(int x:l1){
        cout<<x<<" ";
    }
    cout<<endl;
    if(l2.empty()==true){
        cout<<"Yes"<<endl;
    }
    return 0;
}