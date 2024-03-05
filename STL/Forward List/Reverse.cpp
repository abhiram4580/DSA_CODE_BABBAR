#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int>l{1,2,3,4,5};
    cout<<"Before Reversing"<<endl;
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"After Reversing"<<endl;
    l.reverse();
    for(int x:l){
        cout<<x<<" ";
    }
    return 0;
}